#include <iostream>
#include <cstdlib>
//#include <afxres.h>

using namespace std;


/** Esercizio 1
Dato un array con N elementi di tipo Integer, stamparli a video, con indicazione sulla posizione del singolo elemento.
es.: [0] = 25
*/

/** Esercizio 2
Dato un array con N elementi di tipo Integer, eseguirne la somma e stamparla a video
*/

/** Esercizio 3
Dato un array con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video*/

/** Esercizio 4
Dato un array con N elementi di tipo Float, eseguirne la moltiplicazione e stamparli a video con un numero di cifre decimali pari a 2. */

/** Esercizio 5
Dato un array con N elementi di tipo Float, eseguirne la sottrazione e stamparli a video con un numero di cifre decimali pari a 2.
*/

/**
 Esercizio 6
Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
*/

/*
 Esercizio 7
Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
eseguirne la MEDIA PONDERATA con pesi pari alla corrispondente posizione inversa, e stamparne il risultato a video
*/


/*Esercizio 8
Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float, indicare il maggiore,
il minore e il valore medio, stamparne il risultato a video
*/


/** Esercizio 9
Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
eseguire l’ordinamento crescente e decrescente, stamparne il risultato a video
*/

void es1(int array_int[], int length_int);
void es2(int array_int[], int length_int);
void es3(int array_int[], int length_int);
void es4(float array_float[], int length_float);
void es5(float array_float[], int length_float);
void es6(float array_float[], int length_float);
void es7(float array_float[], int length_float);
void es8(float array_float[], int length_float);
void es9(float array_float[], int length_float);


int main(){
    //dichiaro un array di interi:
    int array_int[] = {12, 6, 8,34, 56, 23, 7, 2, 90};
    int length_int = sizeof array_int / sizeof * array_int;

    //dichiaro un array di float:

    float array_float[] = {12.5, 34.7, 54.5, 78.3, 17.4, 75.9};
    int length_float = sizeof array_float / sizeof * array_float;

    //array Daniele Angeli: { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 }

    float array_float_da[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int length_float_da = sizeof array_float_da / sizeof * array_float_da;

    /* es1(array_int,length_int);
     es2(array_int,length_int);
     es3(array_int,length_int);
     es4(array_float,length_float);
     es5(array_float,length_float);
     es6(array_float_da,length_float_da);
     es7(array_float_da,length_float_da);
     es8(array_float_da,length_float_da);
     es9(array_float_da,length_float_da);*/
    for(int j = 0; j < 10; j++){
    int i;
    cout<<"Inserire un numero compreso tra 1 e 9:"<<endl;
    cin>>i;
    switch (i){
        case 1:
            es1(array_int,length_int);
            break;
        case 2:
            es2(array_int,length_int);
            break;
        case 3:
            es3(array_int,length_int);
            break;
        case 4:
            es4(array_float, length_float);
            break;
        case 5:
            es5(array_float,length_float);
            break;
        case 6:
            es6(array_float,length_float);
            break;
        case 7:
            es7(array_float,length_float);
            break;
        case 8:
            es8(array_float,length_float);
            break;
        case 9:
            es9(array_float,length_float);
            break;
        default:
            cout<<"Numero inserito non e compreso tra 1 e 9"<<endl;
            exit(0);
    }
    }

    return 0;
}

void es1(int array_int[], int length_int){
    int i;
    for( i = 0; i < length_int; i++){
        cout<<"["<<i<<"]"<< "=" <<array_int[i]<<endl;
    }
}

void es2(int array_int[], int length_int){
    int sum = 0;
    for (int i = 0; i < length_int;i++){
        sum += array_int[i];
    }
    //printf("Somma =%d \n ",sum);
    cout<<"Somma = "<<sum<<endl;
}

void es3(int array_int[], int length_int) {
    int dif = 0;
    for (int i = 0; i < length_int; i++) {
        dif -= array_int[i];
    }
    //printf("Diferenza = %d \n" , dif);
    cout<< "Diferenza = " << dif<<endl;
}

void  es4(float array_float[], int length_float){
    float mul = 1;
    for (int i = 0; i < length_float;i++){
        mul *= array_float[i];
    }
    //printf("Multipicazione = %.2f \n ", mul);
    cout.precision(2);
    cout << "Multiplicazione = " << mul<<endl;
}

void es5(float array_float[], int length_float){
    float sott = 0;
    for (int i = 0; i < length_float;i++){
        sott -= array_float[i];
    }
   //printf("Sottrazione = %.2f \n ", sott);
    cout.precision(2);
    cout << "Sottrazione = "<< sott<<endl;
}

void es6(float array_float[], int length_float){
    float sum = 0;
    for (int i = 0; i < length_float; i++){
        sum +=array_float[i];
    }
    //printf("Media = %f \n", sum/length_float);

    cout << "Media = "<< sum/length_float<< endl;
}

void es7(float array_float[], int length_float){
    float sum=0;
    float sum_weight = 0;
    for (int i =0; i < length_float; i++){
        sum += (array_float[i] * (length_float-i-1));
        sum_weight += i;
    }
    //printf("Media_ponderata = %f \n", sum/sum_weight);

    cout<<"Media_ponderata = "<< sum/sum_weight<<endl;
}

void es8(float array_float[], int length_float){
    float element_Min = array_float[0];
    float element_Max = array_float[0];
    float  sum= 0;
    for (int i = 0; i < length_float; i++){
        sum += array_float[i];
        element_Min = min(array_float[i],element_Min);
        element_Max = max(array_float[i], element_Max);
    }

    //printf("Element_Max =%f\nElemento_Min =%f\nValore_medio =%f\n",element_Max,element_Min, sum/length_float );
    cout << "Element_Max = " << element_Max << "\nElemento_Min = "<<element_Min<< "\nValore_medio = "<< sum/length_float<<endl;

}
void es9(float array_float[], int length_float){
    for (int i = 0; i < length_float - 1; i++){
        for (int j = 0; j < length_float - 1 -i; j++){
            if(array_float[j] > array_float[j+1]){
                float tmp = array_float[j];
                array_float[j] = array_float[j+1];
                array_float[j+1] = tmp;
            }
        }
    }
    //printf("L'ordine crescente:\n");
    cout<< "L'ordine crescente: \n"<<endl;
    for (int i = 0; i < length_float; i++){

       // printf("%f\n",array_float[i]);

        cout<<array_float[i]<<endl;
    }
    //printf("L'ordine decrscente:\n");

    cout <<"L'ordine decrescente:\n"<<endl;
    for (int i = length_float-1; i >= 0; i--){

        //printf("%f\n",array_float[i]);
        cout <<array_float[i]<<endl;
    }

}