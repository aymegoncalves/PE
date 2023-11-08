#include <stdio.h>

void le_vetor(int entrada[], int n) {
    int i;
    printf("Digite %d numeros \n", n);
    for (i=0; i<n; i++)
    scanf("%d", &entrada[i]);
}

int minimo(int v[], int n) {
    int i, menor;
    menor = 1000;
    for (i=0; i<n; i++)
        if (v[i] < menor)
            menor = v[i];
    printf("O menor numero eh %d \n", menor);
}

int maximo(int v[], int n) {
    int i, maior;
    maior = 0;
    for (i=0; i<n; i++)
        if (v[i] > maior)
            maior = v[i];
    printf("O maior numero eh %d \n", maior);
}

double media(int v[], int n) {
    int i, media, soma;
    soma = 0;
    for (i=0; i<n; i++)
        soma = soma + v[i];
    media = soma/n;
    printf("A media de numero eh %d \n", media);
}

int main() {
    int n, entrada[1000];

    printf("Digite a quantidade de numeros em sua lista \n");
    scanf("%d",&n);

    le_vetor(entrada, n);
    minimo(entrada, n);
    maximo(entrada, n);
    media(entrada, n);

    return 0;
}