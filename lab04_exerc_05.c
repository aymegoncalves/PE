#include <stdio.h>

void inc(int *n){
    int temp = *n;
    *n = temp + 1;
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    inc(&n);
    printf("%d\n", n);    

    return 0;
}