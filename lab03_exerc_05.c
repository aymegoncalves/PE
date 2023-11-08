//Aymê Cardoso Gonçalves RA:11202111547

#include <stdio.h>
#include <string.h>
#define MAX 1000

void quebra_linhas(char frase[]) {
    int qntd = 0;
    for(int i=0; frase[i] != strlen(frase); i++) {
        if (frase[i] == ' ' || frase[i] == '\n' || frase[i] == '\0') {
            qntd = 0;
        }

        printf("%c", frase[i]);
        qntd += 1;

        if (qntd == 80){
            printf("\n");
            qntd = 0;
        }
    }
}


int main(){
    char frase[MAX];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);  
    
    quebra_linhas(frase);

    return 0;
}