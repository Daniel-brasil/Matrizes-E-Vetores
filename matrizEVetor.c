#include <stdio.h>
#include <stdlib.h>

#include "matrizEVetor.h"

void* vetor(int quantidade, int tipoVariavel, int tipoAlocacao){

    int tamanhoTipo;
    
    if(tipoVariavel==INT) tamanhoTipo = sizeof(int);
    else if(tipoVariavel==DOUBLE) tamanhoTipo = sizeof(double);
    else if(tipoVariavel==FLOAT) tamanhoTipo = sizeof(float);
    else if(tipoVariavel==CHAR) tamanhoTipo = sizeof(char);
    else return NULL;

    if(tipoAlocacao==CALLOC) return calloc(quantidade, tamanhoTipo);
    else if(tipoAlocacao==MALLOC) return malloc(quantidade * tamanhoTipo);
    else return NULL;

}

void **matriz(int quantidadeLinha, int quantidadeColuna, int tipoVariavel, int tipoAlocacao){

    int i, tamanhoTipo;
    void **ponteiroParaPonteiro;

    if(tipoVariavel==INT) tamanhoTipo = sizeof(int*);
    else if(tipoVariavel==DOUBLE) tamanhoTipo = sizeof(double*);
    else if(tipoVariavel==FLOAT) tamanhoTipo = sizeof(float*);
    else if(tipoVariavel==CHAR) tamanhoTipo = sizeof(char*);
    else return NULL;

    ponteiroParaPonteiro = malloc(quantidadeLinha*tamanhoTipo);

    for(i=0; i<quantidadeLinha; i++){

        ponteiroParaPonteiro[i] = vetor(quantidadeColuna, tipoVariavel, tipoAlocacao);


    }

    return ponteiroParaPonteiro;

}


void liberaMemoriaMatriz(void **matriz, int quantidadeLinha){

    int i;

    for(i=0; i<quantidadeLinha; i++){

        free(matriz[i]);

    }

    free(matriz);

}
