//Ayme Cardoso Goncalves RA:11202111547
#include <stdio.h>
#define MAX 1000

void le_matrizA(int n, int m, int A[][MAX]){
    printf("Digite os elementos da matriz A de dimensoes %d x %d:\n", n, m);
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            scanf("%d",&A[i][j]);
}

void le_matrizB(int n, int m, int B[][MAX]){ 
    printf("Digite os elementos da matriz B de dimensoes %d x %d:\n", n, m);
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            scanf("%d",&B[i][j]);
}

void soma_matriz(int n, int m, int A[][MAX], int B[][MAX], int C[][MAX]) {
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            C[i][j] = A[i][j] + B[i][j];

}

void imprime_soma_matriz(int n, int m, int C[][MAX]) {
    printf("A soma das matrizes A e B eh: \n");
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;

    printf("Digite a quantidade de colunas e linhas em sua matriz: \n");
    scanf("%d %d", &n, &m);

    int A[n][MAX], B[n][MAX], C[n][MAX];

    le_matrizA(n, m, A);
    le_matrizB(n, m, B);
    soma_matriz(n, m, A, B, C);
    imprime_soma_matriz(n, m, C);

    return 0;
}