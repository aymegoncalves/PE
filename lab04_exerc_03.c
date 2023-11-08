#include <stdio.h>
#include <stdlib.h> 

void le_vetor(int n){
    int *vetor = calloc(n, sizeof(int));
    printf("Escreva seu vetor de %d caracteres: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
        printf("entrada: %d, conteudo: %d, endereco: %llu\n", i, vetor[i], &vetor[i]);
    }
    free(vetor);
}

int main() {
    int n;
    printf("Digite uma quantidade de caracteres: ");
    scanf("%d", &n);
    le_vetor(n);
}