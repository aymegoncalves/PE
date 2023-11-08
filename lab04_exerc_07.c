#include <stdio.h>
#include <string.h>

void strcat(char a, char b){
  printf("%s%s", a, b);
}
int main(){
  char a, b;
  printf("Digite uma string: ");
  fgets(a, stdin);
  getchar();
  printf("Digite uma string: ");
  fgets(b, stdin);

  strcat(a,b);
}
