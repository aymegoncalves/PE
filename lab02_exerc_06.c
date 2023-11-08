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

void verifica_simetria(int n, int m, int A[][MAX]) {
    int simetr = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (A[i][j] != A[j][i]) {
                simetr += 1;
                break;
            }
        }
    }
    if (simetr != 0) {
        printf("Nao simetrica");
    }
    else {
        printf("Simetrica");
    }
    
}

int main() {
    int n, m;

    printf("Digite a quantidade de colunas e linhas em sua matriz\n");
    scanf("%d %d", &n, &m);

    int A[n][MAX];

    le_matrizA(n, m, A);
    verifica_simetria(n, m, A);

    return 0;
}