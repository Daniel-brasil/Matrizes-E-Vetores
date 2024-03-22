#include <stdio.h>
#include <stdlib.h>
#include "matrizEVetor.h"

int main(){

    int i, j,  **matrixInt = (int**)matriz(2, 3, INT, MALLOC);
    double **matrixDouble = (double**)matriz(2, 3, DOUBLE, MALLOC);
    float **matrixFloat = (float**)matriz(2, 3, FLOAT, CALLOC);
    char **matrixChar = (char**)matriz(2, 3, CHAR, CALLOC); 

    for(i=0; i<2;  i++){

        for(j=0; j<3; j++){

            matrixInt[i][j] = i + j + 1;
            matrixDouble[i][j]= ((double)i + j) + 0.5; 
            matrixFloat[i][j] = ((float)i + j) + 1.5;
            matrixChar[i][j] = 'd';

        }

    }


    for(i=0; i<2;  i++){

        for(j=0; j<3; j++){

            printf("Inteiro [%d][%d]: %d\n", i, j, matrixInt[i][j]);
            printf("Double [%d][%d]: %f\n", i, j,  matrixDouble[i][j]); 
            printf("Float [%d][%d]: %lf\n", i, j, matrixFloat[i][j]);
            printf("Char [%d][%d]: %c\n\n", i, j, matrixChar[i][j]);

        }

    }

    liberaMemoriaMatriz((void**)matrixInt, 2);
    liberaMemoriaMatriz((void**)matrixDouble, 2);
    liberaMemoriaMatriz((void**)matrixFloat, 2);
    liberaMemoriaMatriz((void**)matrixChar, 2);

    return 0;

}