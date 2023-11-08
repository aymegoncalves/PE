#include <stdio.h>
#include <stdlib.h>

void swap(int *a[4], int *b[6]){
    int *temp = malloc(4 * sizeof(int));

    for(int i=0; i<4; i++){
        temp[i] = *a[i];
    }
    for(int i=0; i<6; i++){
        *a[i] = *b[i];
    }
    for(int i=0; i<4; i++){
        *b[i] = temp[i];
    }
}

int main(){
    int a[4] = {1, 2, 3, 4};
    int b[6] = {5, 6, 7, 8, 9, 10};

    swap(a, b);

    for(int i=0; i<6; i++){
        printf("a: %d\n", a[i]);
    }
    for(int i=0; i<4; i++){
        printf("b: %d\n", b[i]); 
    }

    return 0;
}