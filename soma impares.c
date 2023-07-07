#include <stdio.h>
#include <string.h>
#include <math.h>
void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}
int main(){
int numero, soma;
   soma=0;
   do{
  printf("Digite um numero: ");
  scanf("%d", &numero);
  if(numero%2 != 0){
    soma += numero;
  }

}while(numero%2 != 0);
printf("Soma dos numeros imapares: %d",soma);
   
return 0;
}