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
    int n1,n2;
 
    do{
      printf("Digite dois numeros: ");
    scanf("%d\n %d",&n1,&n2);
        if (n1 < n2) {
        printf("Crescente\n");
        } else if (n1>n2){
        printf("Decrescente\n");
        }  
    }while(n1 != n2);
    

    
    
    return 0;
}