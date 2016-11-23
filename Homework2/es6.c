//
// Created by Mariana on 23/11/2016.
//

/*
 * Esercizio 6
Dato un file (https://drive.google.com/open?id=0B8z-V8VGVUFqc0oxUzQ5T21Vb3M) con N elementi di tipo Int,,
indicare il maggiore, il minore e il valore medio, stamparne il risultato a video
*/
#include <stdio.h>
#include <windef.h>

void readFile();

int main(){
    readFile();
    return 0;
}

void readFile(){
    int somma = 0, i = 0, numberMax, numberMin;

    FILE *file;
    file = fopen("C:\\Users\\Mariana\\ClionProjects\\Homework2\\numbers.txt","r");
    if(file!=NULL){
        int * number = malloc(256 * sizeof(int));
        fscanf(file,"%d\n",number);
        somma =*number;
        numberMax = *number;
        numberMin = *number;
        while (!feof(file)){

            fscanf(file,"%d\n", number);
            numberMax = max(*number,numberMax);
            numberMin = min(*number,numberMin);
            somma += *number;
            i++;
            // printf("%lli\n",moltiplicazione);
        }
        printf("max = %d\n",numberMax);
        printf("min = %d\n",numberMin);
        printf("Media=%d\n",somma/i);
        fclose(file);
    }else{
        printf("Errore!\n");
    }
}

