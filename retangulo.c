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
    float base,altura;
    double area,perimetro,diagonal;

    printf("Base do retangulo:");
    scanf("%f", &base);
    printf("Altura do retangulo:");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = (2*base)+(2*altura);
    diagonal=sqrt((pow(base,2)+ pow(altura,2)));

    printf("AREA: %lf\n",area);
    printf("PERIMETRO:%lf \n",perimetro );
    printf("DIAGONAL: %lf\n",diagonal);



    return 0;
}