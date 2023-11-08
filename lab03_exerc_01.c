//Aymê Cardoso Gonçalves RA:11202111547

#include <stdio.h>
#define MAX 100

void impressao_frase(char car, char frase[]) {
    printf("Procurando por %c no texto: %s\n", car, frase);
    
    for(int i=0; frase[i] != '\0'; i++) {
        if(frase[i] != car){
            printf("%c", frase[i]);
        }
        else 
            break;
    }
}

int main(){
    char car, frase[MAX];

    printf("Digite um caractere: ");
    scanf(" %c", &car); 
    getchar();
    printf("Digite uma frase: ");

    fgets(frase, MAX, stdin);  //para ler string com espaco, para na quebra de linha

    impressao_frase(car, frase);

    return 0;
}