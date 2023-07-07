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
int main() {
    int idade,soma,cont;
    float media;
    soma = 0;
    cont = 0;
    
    printf("Digite as idade: \n");   
    do{
        scanf("%d", &idade);
        soma += idade;
        if(idade>0){
        cont += 1;    
        }
        
    }while (idade > 0);

    media = (float)soma/cont;
    printf("MEDIA = %2.1f",media);

    return 0;
}