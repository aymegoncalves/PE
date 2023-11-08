//Aymê Cardoso Gonçalves RA:11202111547

#include <stdio.h>
#define MAX 100

void conta_cadeia(char num[]){
    int qtd, maiorqtd;
    qtd = 0;
    maiorqtd = 0;
    for(int i=0; num[i] != '\0'; i++){
        if(num[i] == '0'){
            qtd += 1;
        }
        else {
            if(qtd > maiorqtd){
                maiorqtd = qtd;
                qtd = 0;
            }

        }
    }
    printf("A maior cadeia de zeros eh %d", maiorqtd);
}

int main(){
    char num[MAX];

    printf("Digite um numero: ");
    scanf("%s", num);

    conta_cadeia(num);

    return 0;
} 