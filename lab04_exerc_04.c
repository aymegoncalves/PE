#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d",&a, &b);

    swap(&a, &b);

    printf("a: %d\n", a); 
    printf("b: %d\n", b); 

    return 0;
}