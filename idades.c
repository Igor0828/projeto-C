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
    char nome1[50],nome2[50];
    int idade1,idade2;
    double media;
        
        printf("Dados da primeira pessoa:\n");
        printf("Nome: \n");
        scanf("%s",&nome1,50);
        limpar_entrada();
        printf("Idade: \n");
        scanf("%i",&idade1);
        limpar_entrada();
        printf("Dados da segunda pessoa:\n");
        printf("Nome: \n");
        scanf("%s",&nome2,50);
        limpar_entrada();
        printf("Idade: \n");
        scanf("%i",&idade2);

       media = (double)(idade1 + idade2)/2.0;

       printf("A meida de idade de: %s e de %s eh de %.1f",nome1,nome2,media );
        
        

        return 0;
}