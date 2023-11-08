//Ayme Cardoso Goncalves RA:11202111547
#include <stdio.h>
#include <stdbool.h>

void le_lista(int lista[], int n) {
    printf("Digite %d numeros \n", n);
    for (int i=0; i<n; i++)
        scanf("%d", &lista[i]);
}

void ordena(int lista[], int n) {
    int i, temp;
    bool troca;
    do{
        troca = false;
        for (i=0; i<n-1; i++){
            if (lista[i] > lista[i+1]) {
                    temp = lista[i];
                    lista[i] = lista[i+1];
                    lista[i+1] = temp;
                    troca = true;
            }
        }
    } while (troca);
}

void imprime_lista(int lista[], int n){
    int i;
    printf("Lista em ordem crescente:\n");
    for (i=0; i<n; i++)
        printf("%d \n", lista[i]);
}

int main() {
    int n, lista[1000];

    printf("Digite a quantidade de numeros em sua lista \n");
    scanf("%d",&n);

    le_lista(lista, n);
    ordena(lista,n);
    imprime_lista(lista, n);
}