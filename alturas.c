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
    int n,soma_idade=0;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);
    
    char nome[n][50];
    int idade[n];
    float altura[n];
    float soma_altura = 0;
    for (int i=0; i < n; i++){
       
        printf("Dados da %i a pessoa:\n",i+1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d",&idade[i]);
        soma_idade += idade[i];
        
        printf("Altura em metros: ");
        scanf("%f",&altura[i]);
        soma_altura+=altura[i];
        
    }

    float media_idade=0;
    float media_altura=0;
    //calculando média de idade

    media_idade += soma_idade / n;
    media_altura += soma_altura / n;

    printf("\nMedia idade = %.2f\n",media_idade);
    printf("\nMedia altura = %.2fm\n",media_altura);


    return 0;
}