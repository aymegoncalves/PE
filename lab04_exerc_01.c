#include <stdio.h>
#include <stdlib.h>

double le_vetor(int n){
    double *vetor, soma;
    vetor = calloc(n, sizeof(double));
    soma = 0;
    printf("Escreva seu vetor de %d numeros: ", n);
    for(int i=0; i<n; i++){
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }
    return soma;
    free(vetor);
}

int main() {
    int n;
    double media;
    printf("Escreva a quantidade de elementos de seu vetor:");
    scanf("%d", &n);
    media = le_vetor(n)/n;
    printf("Media: %lf", media);
    return 0;
}