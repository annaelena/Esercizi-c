//
// Created by Mariana on 23/11/2016.
//
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windef.h>

//generare n rige in un file 1<n<1000
int i;
void generaFile();
void readFile();
int main(){
    generaFile();
    readFile();
    return 0;
}

void generaFile(){
    srand(time(NULL));
    i = rand()%1000+1;
    FILE*file;
    file = fopen("C:\\Users\\Mariana\\ClionProjects\\Homework2\\random.txt","w");
    if(file!=NULL){
        int a = 0;
        for (int j=0; j<i; j++){
            a = rand();
            fprintf(file,"%i\n",a);
            printf("%i\n",a);
        }

        fclose(file);

    }
}

  void readFile(){
    int somma = 0, i = 0, numberMax, numberMin;

    FILE *file;
    file = fopen("C:\\Users\\Mariana\\ClionProjects\\Homework2\\random.txt","r");
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
        printf("Numero_max = %d\n",numberMax);
        printf("Nmero_min = %d\n",numberMin);
        printf("Media=%d\n",somma/i);
        printf("Numeri_generati=%d",i+1);
        fclose(file);
    }else{
        printf("Errore!\n");
    }
}


/*int i;
srand(time(NULL));
//apertura file
if(file!=NULL){
for(int j; j<k;j++){
i =rand()%1000+1;
fprintf(file, "%i\n",i);
}
 fclose(file);
}*/

