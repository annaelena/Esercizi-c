#include <stdio.h>
#include <malloc.h>

/*
 * Esercizio 1
Dato un file (https://drive.google.com/open?id=0B8z-V8VGVUFqc0oxUzQ5T21Vb3M) con N elementi di tipo Int,
leggerli e stamparli a video

 */
void readFile();

int main() {
    readFile();
    return 0;
}

void readFile(){
    FILE*file;
    file = fopen("C:\\Users\\Mariana\\ClionProjects\\Homework2\\numbers.txt","r");
    if(file!=NULL){
        while (!feof(file)){
            int   number;//= malloc(256 * sizeof(int));
            //int number;
            fscanf(file," %s \n", number);
            printf("%s \n", number);
        }
        printf("\n");
        fclose(file);
    } else{
        printf("Errore!\n");
    }
}

