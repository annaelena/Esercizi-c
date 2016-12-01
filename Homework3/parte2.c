//
// Created by Mariana on 29/11/2016.
//

/*
 * Camping - Parte 2
Un camping ha a disposizione 10 casette da affittare per il periodo estivo di cui:
- 7 da 4 persone
- 3 da 2 persone
Tenendo presente che un cliente può affittare 1 sola casa per la propria famiglia dove non vi
è limite temporale , memorizzare i dati anagrafici e di permanenza, predisponendo una
stampa per ordine alfabetico e una per data di chiusura contratto di affitto.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



typedef struct client{
    char *cognomeNome;
    int ID_casetta;
    int giorni;
    struct client * next;
} cliente;

typedef struct {
    int ID;
    int numeroPersone;
    bool affittata;

}casetta;

casetta casettaAffitto[10];

cliente *head;
void caricaCasetta();
void affitta(char *nome, int numero, int numeroGiorni);
void aggiungiCliente(char *nomeCliente, int ID, int numeroGiorni);
void printList();
int controllaPosto(int n);
int main(){
    char *nomeCliente;
    caricaCasetta();
    int numeroPersone;
    int numeroGiorni;
    do{
        printf("Nome Cognome:\n\n");
        scanf("%s",&nomeCliente);
        printf("Siete in 2 o in 4 persone?\n\n");
        scanf("%d",&numeroPersone);
        printf("Per quanti giorni vuoi affitare?\n\n");
        scanf("%d",&numeroGiorni);

        affitta(nomeCliente, numeroPersone,numeroGiorni);
    }while (1!=0);


    return 0;

}
// creo l'array delle casette
void caricaCasetta(){
    for (int i = 0; i < 10 ; ++i) {
        casetta c;
        c.affittata = false;
        c.ID = i;
        if(i > 6){
            c.numeroPersone = 2;
        } else{
            c.numeroPersone = 4;
        }
        casettaAffitto[i] = c;
    }
}

void affitta(char *nome, int numero, int numeroGiorni){
    int controllo =controllaPosto(numero);
    if(controllo!=-1){
        printf("C'e posto!\n");
        cliente cliente1;
        cliente1.cognomeNome = nome;
        cliente1.ID_casetta =controllo;
        casettaAffitto[controllo].affittata=true;
        cliente1.giorni = numeroGiorni;

        aggiungiCliente(nome,controllo,numeroGiorni);

    } else{
        printf("Non c'e posto!");
    }
}
// qui controllo la disponibilità delle casette
int controllaPosto(int n){
    if(n ==2){
        for(int i = 7; i < 10; i++){
            if( casettaAffitto[i].affittata ==false){
                return i;
            }
        }//return -1;
    }else if(n == 4){
        for (int i = 0; i <7 ; ++i) {
            if(casettaAffitto[i].affittata == false){
                return i;
            }
        }//return -1;
    }
        return -1;


}
//con questa funzione aggiungi un nuovo cliente
void aggiungiCliente(char *nomeCliente, int ID, int numeroGiorni){
    if(head == NULL){
        head = malloc(sizeof(cliente));
        head->giorni = numeroGiorni ;
        head->ID_casetta = ID;
        head->cognomeNome = nomeCliente;
        head->next = NULL;
    }else{
        cliente * new_cliente;
        new_cliente = malloc(sizeof(cliente));
        new_cliente->cognomeNome = nomeCliente;
        new_cliente->ID_casetta = ID;
        new_cliente->giorni = numeroGiorni;
        new_cliente->next = head;
        head = new_cliente;
    }
    printList();
}

//creo la lista
void printList(){
    cliente * current = head;
    while (current!=NULL){
        printf("%s - \n\n",&current->cognomeNome);
        current = current->next;
    }
}