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

void imprime_transp_matriz(int n, int m, int A[][MAX]) {
    printf("A transposta da matriz A eh: \n");
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;

    printf("Digite a quantidade de colunas e linhas em sua matriz\n");
    scanf("%d %d", &n, &m);

    int A[n][MAX];

    le_matrizA(n, m, A);
    imprime_transp_matriz(n, m, A);

    return 0;
}