#ifndef MATRIZEVETOR_H_INCLUDED
#define MATRIZEVETOR_H_INCLUDED

#define INT 0
#define DOUBLE 1
#define FLOAT 2
#define CHAR 3
#define MALLOC 0
#define CALLOC 1

void* vetor(int quantidade, int tipoVariavel, int tipoAlocacao);

void **matriz(int quantidadeLinha, int quantidadeColuna, int tipoVariavel, int tipoAlocacao);

void liberaMemoriaMatriz(void **matriz, int quantidadeLinha);

#endif