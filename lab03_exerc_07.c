//Aymê Cardoso Gonçalves RA:11202111547

#include <stdio.h>
#define MAX 100

typedef struct {
    int n;
    int matriz[MAX][MAX];
} Matriz;

Matriz matriz_le(int n) {
    Matriz m;
    m.n = n;
    
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            scanf("%d", &m.matriz[i][j]);
        }
    }
    return m;
}

Matriz matriz_multiplica(Matriz A, Matriz B) {
    Matriz resultado;
    int n = A.n;
    resultado.n = n;
    
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            resultado.matriz[i][j] = 0;
            for (int k = 0; k<n; k++) {
                resultado.matriz[i][j] += (A.matriz[i][k] * B.matriz[k][j]);
            }
        }
    }
    
    return resultado;
}

int main() {
    int n;
    printf("Insira a dimensão da matriz");
    scanf("%d", &n);
    
    Matriz A = matriz_le(n);
    Matriz B = matriz_le(n);

    printf("%d", matriz_multiplica(A, B));
    
    return 0;
}