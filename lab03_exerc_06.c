//Aymê Cardoso Gonçalves RA:11202111547
#include <stdio.h>
#define MAX 100

typedef struct {
    int n;
    int vet[MAX];
} Conjunto;

Conjunto conjunto () {
    Conjunto v;
    printf("Digite a quantidade de elementos: \n");
    scanf("%d", &v.n);

    printf("Digite os %d elementos do vetor:\n", v.n);
    for (int i=0; i<v.n; i++)
        scanf("%d",&v.vet[i]);
    return v;
}

Conjunto conjunto_uniao (Conjunto A, Conjunto B) {
    Conjunto U;
    U.n = A.n + B.n;

    for (int i=0; i<A.n; i++)
        U.vet[i] = A.vet[i];

    for (int i=0; i<B.n; i++)
        U.vet[i+A.n] = B.vet[i];

    return U;
}

char conjunto_pertence(int a, Conjunto A){
    for(int i=0; i<A.n; i++){
        if(a == A.vet[i]){
            return 1;
        }
    }
    return 0;
}

int main() {
    Conjunto A, B, U;
    int a;

    printf("Vetor A:\n");
    A = conjunto();

    printf("Vetor B:\n");
    B = conjunto();
    
    U = conjunto_uniao(A, B);

    printf("Digite um inteiro para verificar se pertence ao conjunto A: ");
    scanf("%d", &a);

    if (conjunto_pertence(a, A)) 
        printf("%d pertence ao conjunto A.\n", a);
    else 
        printf("%d nao pertence ao conjunto A.\n", a);

    return 0;
}