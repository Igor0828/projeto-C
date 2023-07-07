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
int n,i,multiplo;
    do{
    printf("Deseja a tabuada para qual valor? ");
    scanf("%i",&n);
        for(i = 1; i <= 10; i++){
        multiplo = i * n;
        printf("%ix%i = %i \n",n,i,multiplo);}

    }while(n != 0);

    
    return 0;
}