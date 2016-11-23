//
// Created by Mariana on 23/11/2016.
//
#include <stdio.h>
/*
 * Esercizio 4
Dato un file (https://drive.google.com/open?id=0B8z-V8VGVUFqc0oxUzQ5T21Vb3M) con N elementi di tipo Int,
eseguirne la moltiplicazione e stamparli a video
 */

void readFile(){
    double moltiplicazione = 1;
    FILE *file;
    file = fopen("C:\\Users\\Mariana\\ClionProjects\\Homework2\\numbers.txt","r");
    if(file!=NULL){
        while (!feof(file)){
            int * number = malloc(256 * sizeof(int));
            fscanf(file,"%d\n", number);
            moltiplicazione = moltiplicazione * (*number);
           // printf("%lli\n",moltiplicazione);
        }
        printf("Moplicazione=%d\n",moltiplicazione);
        fclose(file);
    }else{
        printf("Errore!\n");
    }
}
int main(){
    readFile();
    return 0;
}