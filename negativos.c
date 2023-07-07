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
    int N, i;

printf("Quantos numeros voce vai digitar? ");
scanf("%d", &N);
double vet[N];

for (i = 0; i < N; i++) {
printf("Digite um numero: ");
scanf("%lf", &vet[i]);
}
printf("\nNUMEROS NEGATIVOS:\n");
for (i = 0; i < N; i++) {
    if (vet[i]<0){
    printf("%.1lf\n", vet[i]);
    }
}

    return 0;
}