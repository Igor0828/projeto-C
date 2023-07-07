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
    int N, i,soma=0;
    float media;
printf("Quantos numeros voce vai digitar? ");
scanf("%d", &N);
double vet[N];

for (i = 0; i < N; i++) {
printf("Digite um numero: ");
scanf("%lf", &vet[i]);
}
printf("\nNUMEROS DO VETOR:\n");
for (i = 0; i < N; i++) {
    printf("%.1lf\n", vet[i]);   
}
printf("\nSOMA VETOR:\n");
for (i = 0; i < N; i++) {
    soma += (vet[i]);
}
printf("%i\n",soma );
media = soma /N;
printf("\nMEDIA VETOR:\n");
printf("%f\n", media);

    return 0;
}