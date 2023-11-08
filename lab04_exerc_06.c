#include <stdio.h>

void swap(int *a, int *b, int tamA,  int tamB){
    for (int i = 0; i < tamB; i++) {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main(){
    int a[4] = {1, 2, 3, 4};
    int b[6] = {5, 6, 7, 8, 9, 10};

    swap(a, b, 4, 6);

    printf("a: ");
    for(int i=0; i<6; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("b: ");
    for(int i=0; i<4; i++){
        printf("%d ", b[i]); 
    }
    printf("\n");
    return 0;
}
