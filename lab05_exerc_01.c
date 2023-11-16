#include <stdio.h>

int count_down(int n){
    if(n==0){
        printf("ACABOU!");
        return 1;
    } else {
        printf("%d\n", n);
        return count_down(n-1);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);

    count_down(n);
}