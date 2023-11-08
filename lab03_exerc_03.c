//Aymê Cardoso Gonçalves RA:11202111547

#include <stdio.h>
#define MAX 100

void muda_texto(char texto []){
    for(int i=0; texto[i] != '\0'; i++){
        int codigo = texto[i];
        //printf("%d\n", codigo);
        if(codigo >= 65 && codigo <= 90){
            int novo_codigo = codigo + 32;
            //printf("%d\n", novo_codigo);
            printf("%c",(char)novo_codigo);
        }
        else if (codigo >= 97 && codigo <= 122){
            int novo_codigo = codigo - 32;
            //printf("%d\n", novo_codigo);
            printf("%c",(char)novo_codigo);
        }
        else 
             printf("%c", texto[i]);
    }

}

int main() {
    char texto[MAX];

    printf("Digite um texto: ");
    fgets(texto, MAX, stdin);

    muda_texto(texto);
}