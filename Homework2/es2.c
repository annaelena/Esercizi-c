//
// Created by Mariana on 23/11/2016.
//

/*
 * Esercizio 2
Dato un file (https://drive.google.com/open?id=0B8z-V8VGVUFqc0oxUzQ5T21Vb3M) con N elementi di tipo Integer,
eseguirne la somma e stamparla a video

 */

#include <stdio.h>

void readFile(){
    int somma = 0;
    FILE*file;
    file = fopen("C:\\Users\\Mariana\\ClionProjects\\Homework2\\numbers.txt","r");
    if(file!=NULL){
        while (!feof(file)){
            int * number= malloc(256 * sizeof(int));
            //int number;
            fscanf(file," %d \n", number);
            somma = somma + *number;
        }
        printf("%i \n",somma);
        fclose(file);

    } else{
        printf("Errore!\n");
    }
}

int  main(){
    readFile();
    return 0;
}