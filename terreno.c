#include <stdio.h>
#include <string.h>
void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}
int main(){
    float largura,comprimento,preco,valor_terreno,valor_total;

        printf("Digite a largura do terreno:");
        scanf("%f", &largura);
        printf("Digite a largura do comprimento:");
        scanf("%f", &comprimento);
        printf("Digite o valor do metro quadrado:");
        scanf("%f", &preco);
        //limpa entrada da teclado para nao gerar conflito com proxima
        limpar_entrada();
        
        valor_terreno = largura * comprimento;
        valor_total = valor_terreno * preco;
        
        printf("\n Area do terreno = %1.2f ",valor_terreno);
        printf("\n  Preco do terreno = %1.2f ",valor_total);











    return 0;
}