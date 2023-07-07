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
    float a,b,c,x1,x2,delta;

    printf("Coeficiente a:");
    scanf("%f",&a);
    printf("Coeficiente b:");
    scanf("%f",&b);
    printf("Coeficientec c: ");
    scanf("%f", &c);

    delta = (pow(b,2))-4*a*c;

        if(a == 0 || delta < 0){
            printf("Esta equacao nao possui raizes reais\n");
            }else{
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("\nx1=%.3lf \nx2=%.3lf ",x1,x2);
        }
    return 0;
}