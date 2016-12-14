//
// Created by Mariana on 13/12/2016.
//
/*PARTE 2


Es. 1
data una matrice di numeri random effettuare la somma dei valori di ogni riga


es. 2
data una matrice di numeri random effettuare la somma dei valori di ogni colonna


es. 3
data una matrice di numeri random trovare il valore più piccolo per ogni riga


es. 4
data una matrice di numeri random trovare il valore più piccolo per ogni colonna*/


#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;



int  main(){
    //dichiarazione di una matrice( array multidimensionale)
    int matrice[10][10];
    //inizializzo il seme della funzione random
    srand((unsigned)time(NULL));
    // scorro le righe
    int i = 0;
    int j = 0;
    for (i=0; i <10; i++)
    {
        // scorro le colonne
        for ( j=0; j < 10 ;j++) {
            // assegno all'elemento [X][Y] il valore
            //per evitare il ZERO +1;
            matrice[i][j] = rand() % 50 +1;
            cout << matrice[i][j] << "\t";
        }
        cout<<"\n\n\n";
    }
    cout<<"RIGA\n\n";
    for(int i = 0; i < 10; i++){
        int somma_riga = 0;
        int max_el_riga = matrice[0][0];
        int min_el_riga = matrice[0][0];
        for(j = 0; j < 10; j++){
            somma_riga = somma_riga + matrice[i][j];
            max_el_riga = max(matrice[i][j],max_el_riga);
            min_el_riga = min(matrice[i][j],min_el_riga);
        }
        cout<<"SOMMA "<<i<<"="<<somma_riga<<"\n";
        cout<<"max"<<i<<"="<<max_el_riga<<"\n";
        cout<<"min"<<i<<"="<<min_el_riga<<"\n\n";
    }
    cout<<"COLONNA\n\n";
    for(j = 0; j < 10; j++){
        int somma_colonna = 0;
        int max_colonna = matrice[0][0];
        int min_colonna = matrice[0][0];
        for (i = 0; i < 10;i++){
            somma_colonna = somma_colonna + matrice[i][j];
            max_colonna = max(matrice[i][j],max_colonna);
            min_colonna = min(matrice[i][j],min_colonna);
        }
        cout<<"SOMMA "<<j<<"="<<somma_colonna<<"\n";
        cout<<"max"<<j<<"="<<max_colonna<<"\n";
        cout<<"min"<<j<<"="<<min_colonna<<"\n\n";
    }


    return 0;
}