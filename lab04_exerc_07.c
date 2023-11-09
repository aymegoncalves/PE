#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strcat(char* a, char* b){
  printf("%s", a);
  printf("%s\n", b);
}
int main(){
  char* a = malloc(10 * sizeof(char));
  char* b = malloc(10 * sizeof(char));
  printf("Digite uma string: ");
  fgets(a, sizeof(a), stdin);
  getchar();
  printf("Digite uma string: ");
  fgets(b, sizeof(b), stdin);

  strcat(a,b);

  free(a);
  free(b);
  return 0;
}
