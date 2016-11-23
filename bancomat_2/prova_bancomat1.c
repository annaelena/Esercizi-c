#include <stdio.h>
#include <stdlib.h>

// Questa è la definizione di un TIPO di variabile, non di una variabile
typedef struct op {
    int saldo;
    char *string;
    struct op * next;
} Operazione;

void prelievo(int *);

void versamento(int *);

void estratto_conto(Operazione *);

void letturaFile();

void menu(int, Operazione *);
void scritturaFile(int  x,char * q);

int main() {
	Operazione * head= NULL;
    int const saldo_iniziale = 1000;
    int saldo = saldo_iniziale;
    //Operazione storico[100];
    //int count = 0;
    //menu(saldo, storico, count);
    menu(saldo, head);

    return 0;
}


void menu(int saldo, Operazione * head) {
    int input;
    char risposta;
    Operazione * nuova_operazione;

    do {
        // pulisce lo schermo
        // system("cls");
        // mostro il menu
        printf("1. prelievo\n");
        printf("2. versamento\n");
        printf("3. estratto_conto\n");
        printf("4. lettura_file\n");
        printf("5. exit\n");
        // prendo da input la risposta
        scanf("%d", &input);

        switch (input) {
            case 1:
                prelievo(&saldo);
				nuova_operazione = malloc(sizeof(Operazione));
                nuova_operazione->string = "prelievo";
                nuova_operazione->saldo = saldo;
                nuova_operazione->next = head;
                head = nuova_operazione;
               // scritturaFile(input,"prelievo");

                //storico[count] = nuova_operazione;
                //count++;
                break;
            case 2:
                versamento(&saldo);
				nuova_operazione = malloc(sizeof(Operazione));
                nuova_operazione->string = "versamento";
                nuova_operazione->saldo = saldo;
                nuova_operazione->next = head;
                head = nuova_operazione;
                //scritturaFile(input,"versamenti");
                //storico[count] = nuova_operazione;
                //count++;
                break;
            case 3:
                estratto_conto(head);
                break;
            case 4:
                letturaFile();
                break;
            case 5:
                printf("Thanks for playing!\n");
                menu(saldo, head);
                break;
            default:
                printf("input errato \n");
                break;
        }
        printf("prova del saldo %d\n", saldo);
        printf("vuoi fare altro? (s/n):\n");
        scanf(" %c", &risposta);
		system("cls");
    } while (risposta=='s' || risposta == 'S');
}

void prelievo(int *saldo) {
    int p;
    printf("digita importo del prelievo:\n");
    scanf("%d", &p);
    *saldo = *saldo - p;
    scritturaFile(p,"prelievo");

}

void versamento(int *saldo) {
    int v;
    printf("digita importo del versamento:\n");
    scanf("%d", &v);
    *saldo = *saldo + v;
    scritturaFile(v,"versamenti");

}

void estratto_conto(Operazione * head) {
    //for (int i = count; i >= 0; i--) {
    //     printf("saldo: %i\n", storico[i].saldo);
    //     printf("operazione di %s\n", storico[i].string);
    //}
    Operazione * tmp = head;
    while(tmp!=NULL){
        printf("sardo: %i\n", tmp->saldo);
        printf("operazione di %s\n", tmp->string);
        tmp = tmp->next;
    }
}


void scritturaFile(int x, char *q){
    FILE*file;
    file=fopen("C:\\Users\\Mariana\\ClionProjects\\bancomat_2\\un_file.txt","a");
    if(file!=NULL){
        fprintf(file,"%i %s \n",x,q);
        fclose(file);

    } else{
        printf("Errore, impossibile aprire il file\n");
    }
}

void letturaFile(){
    //char *str= malloc (256 *sizeof(char));
     FILE *file;
     file = fopen("C:\\Users\\Mariana\\ClionProjects\\bancomat_2\\un_file.txt","r"); //w=write; r = read; a= appeand

    if(file!=NULL){
         while (!feof(file)){
             char *str= malloc(256 *sizeof(char));
             int number;
             fscanf(file," %d %s \n", &number, str);
             printf(" %d %s \n",number, str);

         }
         printf("\n");
         fclose(file);
     }else{
         printf("Errore, impossibile aprire il file\n");
     }
    // free(str);


}


/*
 * file = fopen( "test.txt" , "r");
if (file) {
    while (fscanf(file, "%s", str)!=EOF)
        printf("%s",str);
    fclose(file);
}
 */



































