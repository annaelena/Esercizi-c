//
// Created by Mariana on 23/11/2016.
//

#include <stdio.h>
/*
 * Esercizio 5
Dato un file (https://drive.google.com/open?id=0B8z-V8VGVUFqc0oxUzQ5T21Vb3M) con N elementi di tipo Int,,
eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
*/


void readFile(){
    int somma = 0;
    FILE *file;
    file = fopen("C:\\Users\\Mariana\\ClionProjects\\Homework2\\numbers.txt","r");
    if(file!=NULL){
        int i = 0;
        while (!feof(file)){
            int * number = malloc(256 * sizeof(int));
            fscanf(file,"%d\n", number);
            somma += *number;
            i++;
            // printf("%lli\n",moltiplicazione);
        }
        printf("Media=%d\n",somma/i);
        fclose(file);
    }else{
        printf("Errore!\n");
    }
}

int main(){
    readFile();
    return 0;
}