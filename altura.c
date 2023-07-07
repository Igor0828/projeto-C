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
    int n;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",n);
    
    char nome[n][50];
    int idade[n];
    float altura[n];
    
    for (int i=0; i < n; i++){
       
        printf("Dados da %i a pessoa:\n",i+1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nome[i]);
        printf("\tIdade: ");
        scanf("%d",&idade[i]);
        
        printf("\tAltura em metros: ");
        scanf("%f",&altura[i]);
        
    }

    return 0;
}