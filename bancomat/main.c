#include <stdio.h>
#include <stdlib.h>


/*
 * 1. versamento
 * 2. prelievo
 * 3. lista movimenti o saldo
 * 4.exit
 */


void  versamento(int s);
void prelievo(int s);
void resoconto();
void lista_movimenti();

int saldo = 10000;
int operazioni[] ;
int length_operazioni = sizeof operazioni/ sizeof * operazioni;
int opzione, pin, somma1, somma2;
int main() {

    printf("Inserisci il tuo PIN:\n");
    scanf("%d",&pin);
    if(pin != 1234) {
        printf("Pin errato!");
        printf("Inserisci il tuo PIN:");
    } else {
        printf("BENVENUTO!\n\n");

        while(1) {
            printf("1.Versamento\n");
            printf("2.Prelievo\n");
            printf("3.Resoconto\n ");
            printf("4.Exit\n");
            scanf("%d",&opzione);
            switch (opzione) {
                case 1:
                    printf("Quanto vuole versare?\n");
                    scanf("%d",&somma1);
                    versamento(somma1);
                    break;
                case 2:
                    printf("Quanto vuole prelevare?\n");
                    scanf("%d",&somma2);
                    prelievo(somma2);
                    break;
                case 3:
                    resoconto();
                    break;
                case 4:
                    exit(0);
                default:
                    printf("Scelta inesitente!\n");

            }


        }
    }

    return 0;
    }

void versamento(int somma){
    saldo += somma;
    printf("Suo saldo corente e':%d \n",saldo );

}

void prelievo(int somma) {

    if( somma < saldo ){
        saldo -=somma;
        printf("Suo saldo corente e':%d \n",saldo);
    }


}
void resoconto(){
    saldo = saldo;
    printf("Suo saldo e':%d\n",saldo);
}
void lista_movimenti(){

}
