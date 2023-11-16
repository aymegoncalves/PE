#include <stdio.h>

int count_up(unsigned int n){
    if(n==0){
        printf("0\n");
        return 1;
    } else {
        count_up(n-1);
        printf("%d\n", n);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);

    count_up(n);
}