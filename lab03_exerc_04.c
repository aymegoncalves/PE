//Aymê Cardoso Gonçalves RA:11202111547

#include <stdio.h>
#define MAX 100

int aparece(char palavra[], char frase[], int i) {
    for(int j=0; palavra[j] != '\0'; j++) {
        if(frase[i + j] == '\0' || (frase[i + j] != palavra[j] && palavra[j] != '*') ){
            return 0;
        }
        return 1;
    }
}

int main(){
    char palavra[MAX], frase[MAX];

    printf("Digite uma palavra: ");
    scanf(" %s", &palavra); 
    getchar();

    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);  //para ler string com espaco, para na quebra de linha

    printf("Procurando por %s no texto: %s\n", palavra, frase);
    int i, resp;
    for(i=0; frase[i] != '\0'; i++) {
        resp = aparece(palavra, frase, i);
    }

    if(resp == 0)
        printf("sim");
    else
        printf("nao");

    return 0;
}