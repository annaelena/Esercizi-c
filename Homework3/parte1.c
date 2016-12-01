/*
 * Camping - Parte 1
Ogni mattina entro le 10 i campeggiatori che hanno terminato il proprio soggiorno devono
lasciare libera la piazzola che hanno occupato.
Ciascun campeggiatore deve dichiarare:
- il numero di giorni trascorsi al camping
- il numero di persone formanti il gruppo
- il tipo di abitacolo ('T': tenda, 'R':roulotte)
- il tipo di veicolo ('A': auto, 'M': moto)
Calcolare e stampare quanto deve pagare ciascun gruppo in base a questo listino prezzi:
- euro 5 per persona al giorno
- euro 4 per tenda al giorno
- euro 4,50 per roulotte al giorno
- euro 5,50 per auto al giorno
- euro 3,50 per moto al giorno*/


#include <stdio.h>



double costo();

int main() {
costo();

    return 0;
}

double costo( ){
    int numeroGiorni, numeroPersone;
    char tipoAbitacolo,tipoVeicolo;
    printf("Quanti giorni vuoi passare in questo camping?\n");
    scanf("%d",&numeroGiorni);
    printf("Quante persone?\n");
    scanf(" %d",&numeroPersone);
    printf("Tipo abitacolo: inserire 'T' per tenda o 'R' per roulotte. Grazie!\n");
    scanf(" %c",&tipoAbitacolo);
    printf("Tipo veicolo: inserire 'A' per auto o 'M' per moto. Grazie!\n");
    scanf(" %c",&tipoVeicolo);
    double  costoGiorni = 0;
    double costoAbitacolo = 0;
    double costoVeicolo = 0;
    double costoVacanza = 0;
        costoGiorni = 5*numeroGiorni*numeroPersone;
        printf("Costo per %d persone per %d giorni e':%.2f\n\n",numeroPersone,numeroGiorni,costoGiorni);
        if(tipoAbitacolo=='T'){
            costoAbitacolo = 4*numeroGiorni;
            printf("Costo tenda per %d e':%.2f\n\n",numeroGiorni,costoAbitacolo);
        } else{
            if(tipoAbitacolo == 'R'){
                costoAbitacolo = 4.5 *numeroGiorni;
                printf("Costo tenda per %d giorni e':%.2f\n\n",numeroGiorni,costoAbitacolo);
            }
        }
        if(tipoVeicolo == 'A'){
            costoVeicolo = 5.5 * numeroGiorni;
            printf("Costo auto per %d giorni e': %.2f\n\n",numeroGiorni,costoVeicolo);
        }else{
            if(tipoVeicolo == 'M'){
                costoVeicolo = 3.5 * numeroGiorni;
                printf("Costo moto per %d giorni e': %f\n\n ",numeroGiorni,costoVeicolo);
            }
        }

        costoVacanza = costoGiorni +costoVeicolo +costoAbitacolo;


    printf("Costo vacanza per %d persone per %d giorni e': %.2f\n",numeroPersone,numeroGiorni,costoVacanza);



}