/*
 * PARTE 1

es. 1
data una matrice di numeri random effettuare la somma dei valori


es. 2
data una matrice di numeri random effettuare la moltiplicazione


es. 3
data una matrice di numeri random effettuare la media dei valori
 */

#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;



int  main(){
    //dichiarazione di una matrice( array multidimensionale)
    int matrice[10][10];
    //inizializzo il seme della funzione random
    srand((unsigned)time(NULL));

    int i = 0;
    double somma =0;
    double multiplicazione =1;
    double media = 0;
    // scorro le righe
    for (i=0; i <10; i++)
    {

        int j = 0;
        // scorro le colonne
        for ( j=0; j < 10 ;j++) {
            // assegno all'elemento [X][Y] il valore

            //per evitare il ZERO +1;
            matrice[i][j] = rand() % 50 +1;
            cout << matrice[i][j] << "\t";
            somma = somma + matrice[i][j];
            multiplicazione = multiplicazione * matrice[i][j];
            media = somma/100;
        }
        cout<<"\n";
    }

    cout<<"SOMMA ="<<somma<<"\n"<<endl;
    cout<<"MULTIPLICAZIONE ="<<multiplicazione<<"\n"<<endl;
    cout<<"MEDIA="<<media<<endl;

    return 0;
}