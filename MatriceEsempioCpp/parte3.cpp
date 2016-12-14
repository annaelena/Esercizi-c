//
// Created by Mariana on 13/12/2016.
//

/*
 * PARTE 3

es. 1

data una matrice di numeri random effettuare la somma dei valori della diagonale

es. 2

data una matrice di numeri random stamparli su file
*/



#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>


using namespace std;


int  main() {
    //dichiarazione di una matrice( array multidimensionale)
    int matrice[10][10];
    //inizializzo il seme della funzione random
    srand((unsigned) time(NULL));
    // scorro le righe
    //int i = 0;
    //int j = 0;
    int somma_diagonale = 0;
    for (int i = 0; i < 10; i++) {
        // scorro le colonne

        for (int j = 0; j < 10; j++) {
            // assegno all'elemento [X][Y] il valore
            //per evitare il ZERO +1;
            matrice[i][j] = rand() % 50 + 1;
            cout << matrice[i][j] << "\t";
            if(i==j){
                somma_diagonale= somma_diagonale+matrice[i][j];
            }
        }
        cout << "\n\n\n";

    } cout<<"SOMMA_DIAGONALE ="<<somma_diagonale<<"\n\n";

// scrittura su file
   fstream file("C:\\Users\\Mariana\\ClionProjects\\MatriceEsempioCpp\\matrice.txt",fstream::out);
    if (file.is_open())
    {
        if (file.good()) {
            cout<<"file aperto e OK"<<endl;
        }


        for (int i=0; i <10; i++)
        {
            int j = 0;
            for (j=0;j<10;j++) {
                // output in console con tabulazione
                file <<matrice[i] [j]<<"\t";
            }
            file <<endl;
        }
        file.close();
    }

    return 0;
}










