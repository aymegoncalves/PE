#include <stdio.h>
#define MAX 100

int soma(int v[], int n){
    if(n==0){
        return 1;
    } else {
        for(int i=0; i<n; i++)
            return soma(v[n], n-1);
    }
}

int main(){
    int n, v[MAX];
    
    printf("Numero de elementos do vetor: ");
    scanf("%d", &n);
    printf("Insira o vetor de %d elementos: ",n);
    for(int i=0; i<n; i++)
        scanf("%d", &v[i]);
    
    /*
    n = 0;
    v[5] = {1, 2, 3, 4, 5};
    printf("A soma dos elementos do vetor eh" );
    for(int i=0; i<5; i++)
        printf("%d", v[i]);
    printf("eh: ");
    */

    printf("A soma dos elementos do vetor eh" );
    int s = 0;
    s += soma(v[MAX], n);
}