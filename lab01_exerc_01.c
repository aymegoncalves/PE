#include <stdio.h>

void le_lista(int lista[], int n){
    int i;
    printf("Digite %d numeros \n", n);
    for (i=0; i<n; i++)
        scanf("%d", &lista[i]);
}

void imprime_pares(int lista[], int n){
    int i;
    printf("Pares: \n");
    for (i=0; i<n; i++)
        if(lista[i] % 2 == 0)
            printf("%d \n", lista[i]);
}

int main() {
    int n, lista[1000];

    printf("Digite a quantidade de numeros em sua lista \n");
    scanf("%d",&n);

    le_lista(lista,n);
    imprime_pares(lista,n);

    return 0;
}