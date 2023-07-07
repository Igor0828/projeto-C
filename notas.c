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
    float nota1,nota2,nota_final;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); //ler o valor da primeira nota digitada pelo
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);//ler o valor da segunda nota digitada por usuário
    limpar_entrada();

    nota_final = (nota1 + nota2)/2;

    printf("Nota final: %f",nota_final);

    if (nota_final < 60){
        printf("Reprovado");
    }else{
     printf("Aprovado");   
    }


    return 0;
}