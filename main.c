#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define FIL 4
#define COL 5

void rellenaMatrizAleatorio(int m[][COL]);
void mostrarResultados(int m[][COL]);
int sumaFilaMatriz(int m[][COL],int fila);
int sumaColMatriz(int m[][COL],int colu);
int sumaTotalMatriz(int m[][COL]);

int main() {
    int matriz[FIL][COL];
    rellenaMatrizAleatorio(matriz);
    mostrarResultados(matriz);
    return 0;
}

void rellenaMatrizAleatorio(int m[][COL]){
    srand(time(NULL));
    for (int i = 0; i < FIL; ++i) {
        for (int j = 0; j < COL; ++j) {
            m[i][j]=rand()%10;
        }
    }
}

void mostrarResultados(int m[][COL]){
    printf("Generacion de 20 numeros (entre 0 y 9) de forma aleatoria\n\n");
    for (int i = 0; i < FIL; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf(" %2d  ",m[i][j]);
        }
        printf(" S: %d\n", sumaFilaMatriz(m,i));
    }
    for (int i = 0; i < COL; ++i) {
        printf(" %2d  ", sumaColMatriz(m,i));
    }
    printf(" T: %d\n", sumaTotalMatriz(m));
}

int sumaFilaMatriz(int m[][COL],int fila){
    int suma=0;
    for (int i = 0; i < COL; ++i) {
        suma+=m[fila][i];
    }
    return suma;
}

int sumaColMatriz(int m[][COL],int colu){
    int suma=0;
    for (int i = 0; i < FIL; ++i) {
        suma+=m[i][colu];
    }
    return suma;
}

int sumaTotalMatriz(int m[][COL]){
    int suma=0;
    for (int i = 0; i < FIL; ++i) {
        for (int j = 0; j < COL; ++j) {
            suma+=m[i][j];
        }
    }
    return suma;
}

