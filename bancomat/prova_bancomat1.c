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

void menu(int, Operazione *);

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

void prelievo(int *saldo) {
    int p;
    printf("digita importo del prelievo:");
    scanf("%d", &p);
    *saldo = *saldo - p;

}

void versamento(int *saldo) {
    int v;
    printf("digita importo del versamento:");
    scanf("%d", &v);
    *saldo = *saldo + v;

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
        printf("4. exit\n");
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
                //storico[count] = nuova_operazione;
                //count++;
                break;
            case 3:
                estratto_conto(head);
                break;
            case 4:
                printf("Thanks for playing!\n");
                menu(saldo, head);
                break;
            default:
                printf("input errato \n");
                break;
        }
        printf("prova del saldo %d\n\n", saldo);
        printf("vuoi fare altro? (s/n):");
        scanf(" %c", &risposta);
		system("cls");
    } while (risposta=='s');
}







































