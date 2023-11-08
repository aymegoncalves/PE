//Ayme Cardoso Goncalves RA:11202111547
#include <stdio.h>

void le_vetor(int valores[], int n) {
    printf("Digite %d numeros \n", n);
    for (int i=0; i<n; i++)
        scanf("%d", &valores[i]);
}

int busca(int valores[], int n, int chave){
    int busca = 0;
    for (int i=0; i<n; i++)
        if (valores[i] == chave) {
            return i;
            busca += 1;
            break;
        }
    if (busca > 0)
        return -1;
}

int main() {
    int n, valores[1000], chave, retorno;

    printf("Digite a quantidade de numeros em sua lista \n");
    scanf("%d",&n);

    le_vetor(valores, n);

    printf("Digite uma chave \n");
    scanf("%d",&chave);

    retorno = busca(valores, n, chave);
    printf("O retorno eh %d", retorno);

    return 0;
}