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

void destruir_lista(Lista l){
    Lista atual;
    for(atual=l; atual!=NULL;atual=atual->prox){
        free(atual);
    }
}

int main(){
    Lista l;
    l = criar_lista();
    destruir_lista(l);
}