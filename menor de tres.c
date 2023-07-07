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
    float x1,x2,x3;

    printf("Primeiro valor: ");
    scanf("%f",&x1);
    printf("Segundo valor: ");
    scanf("%f", &x2);
    printf("Terceiro valor: ");
    scanf("%f", &x3);

    if (x1>x2){
        printf("%f",x1);   
    }else{
        printf("%f",x2); 
       if(x2<x3)
        printf("%f",x3);
       
    }

    return 0;
}