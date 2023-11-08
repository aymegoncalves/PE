//Ayme Cardoso Goncalves RA:11202111547
#include <stdio.h>
#define MAX 1000

void le_matrizA(int n, int m, int A[][MAX]){
    printf("Digite os elementos da matriz A de dimensoes %d x %d:\n", n, m);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d",&A[i][j]);
        }
    }
}

void troca_matriz(int n, int m, int A[][MAX], int a, int b) {
    for (int k=0; k<m; k++){
        int temp = A[a][k];
        A[a][k] = A[b][k];
        A[b][k] = temp;
    }
}

void imprime_matriz_trocada(int n, int m, int A[][MAX], int a, int b) {
    printf("A matriz A com linhas %d e %d trocadas eh: \n", a, b);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m, a, b;

    printf("Digite a quantidade de colunas e linhas em sua matriz:\n");
    scanf("%d %d", &n, &m);

    int A[n][MAX];

    le_matrizA(n, m, A);
    
    printf("Digite dois numeros a e b para que tais linhas seram trocadas de lugar.\n");
    scanf("%d %d", &a, &b);

    troca_matriz(n, m, A, a-1, b-1);
    imprime_matriz_trocada(n, m, A, a, b);

    return 0;
}