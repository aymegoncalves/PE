#include <stdio.h>
#include <stdlib.h> 

void le_vetor(int n){
    char *vetor = calloc(n, sizeof(int));
    char carac;
    printf("Escreva seu vetor de %d caracteres: ", n);
    for(int i=0; i<n; i++){
        carac = getchar();
        if(carac != ' ' && carac != '\0'){
            vetor[i] = carac;
            printf("entrada: %d, conteudo: %c, endereco: %llu\n", i, vetor[i], &vetor[i]);
        }
        else
            i -= 1;
    }
    free(vetor);
}

int main() {
    int n;
    printf("Digite uma quantidade de caracteres: ");
    scanf("%d", &n);
    getchar();
    le_vetor(n);
}