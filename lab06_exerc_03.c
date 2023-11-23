#include <stdio.h>
#include <stdlib.h>

typedef struct no* Lista;

struct no{
    int dado;
    Lista prox;
};

Lista criar_lista(){
    return NULL;
}

Lista adicionar_elemento(Lista l, int num){
    Lista novo;
    novo = malloc(sizeof(struct no));
    novo ->dado = num;
    novo ->prox = l;
    return novo;
}
int busca(Lista l, int x){
    if(l != NULL && l->dado != x){
        busca(l->prox, x);
        return 0;
    } else {
        return l->dado;
        //remover este elemento com funcao iterativa
    }
}

void destruir_lista(Lista l){
    if(l!=NULL){
        destruir_lista(l->prox);
        free(l);
    }
}

int main(){
    int num, x, b;
    Lista l;
    l = criar_lista();

    printf("Digite uma lista de numeros: ");
    do {
        scanf("%d", &num);
        if (num > 0)
            l = adicionar_elemento(l, num);
    } while (num != '\0');

    printf("Digite um numero para buscar na lista: ");
    scanf("%d", &x);
    
    b = busca(l, x);
    printf("%d", b);

    destruir_lista(l);
    return 0;
}