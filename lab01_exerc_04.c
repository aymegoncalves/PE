#include <stdio.h>

void le_vetores(int n, double u[], double v[]){
    int i;

    printf("Digite %d numeros para o vetor u \n", n);
    for (i=0; i<n; i++)
        scanf("%lf", &u[i]);
    
    printf("Digite %d numeros para o vetor v \n", n);
    for (i=0; i<n; i++)
        scanf("%lf", &v[i]);
}

void produto_hadamard(int n, double u[], double v[], double resultado[]){
    int i;

    printf("O resultado do produto dos vetores eh:\n");

    for (i=0; i<n; i++){
        resultado[i] = u[i] * v[i];
        printf("%.2lf\n", resultado[i]);
    }
}

int main() {
    int n;
    double u[100], v[100], resultado[100];

    printf("Digite o tamanho dos seus vetores: \n");
    scanf("%d", &n);

    le_vetores(n, u, v);
    produto_hadamard(n, u, v, resultado);
}