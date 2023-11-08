#include <stdio.h>

int main(){
    int unidade, t, tc, tf;

    printf("Digite o valor de temperatura a ser convertida:");
    scanf("%d", &t);
    
    printf("Digite qual a unidade de medida da temperatura. 1 - Celsius. 2 - Fahrenheit. \n");
    scanf("%d", &unidade);

    printf("A temperatura convertida eh ");
    
    if (unidade == 1) {
        tf = (5 * t)/5 + 32;
        printf("%d F.\n", tf);
    }

    else {
        tc = (t-32) * 5 / 9;
        printf("%d C.\n", tc);
    }

    return 0;
}