//Aymê Cardoso Gonçalves RA:11202111547
#include <stdio.h>
#define MAX 100

struct data {
    int dia;
    int mes;
    int ano;
};

struct aluno {
    char nome[MAX];
    struct data nascimento;
    int ra;
};

void cadastro(int qntd, struct aluno alunos[]){
    struct aluno novo;
    printf("Digite o nome do aluno: ");
    scanf("%s", novo.nome);
    getchar();
    printf("Digite o dia de nascimento: ");
    scanf("%d", &novo.nascimento.dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &novo.nascimento.mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &novo.nascimento.ano);
    printf("Digite o RA: ");
    scanf("%d", &novo.ra);

    alunos[qntd] = novo;
    qntd += 1;
}

void busca(int qntd, struct aluno alunos[], char aluno_buscado[]){
    for(int i = 0; i<qntd; i++){
        for(int j=0; j<qntd; j++){
            if(alunos[i].nome == aluno_buscado[j])
                printf("%s", alunos[i].nome);
        }
    }
}

int main(){
    int resp;
    printf("Digite: 1 - Cadastrar um aluno, 2 - Buscar aluno por nome, 3 - Listar alunos pelo aniversario.\n");
    scanf("%d", &resp);

    int qntd = 0;
    struct aluno alunos[MAX];
    char aluno_buscado[MAX];

    if(resp == 1)
        cadastro(qntd, alunos);
    
    else if(resp == 2){
        printf("Digite o nome ou sobrenome do aluno a ser buscado: ");
        scanf("%s", aluno_buscado);
        getchar();
        busca(qntd, alunos, aluno_buscado);
    }
    /*
    if (resp == 3)
        lista();
    */
    else
        printf("Opcao invalida, tente novamente");
}