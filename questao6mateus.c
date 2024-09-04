#include <stdio.h>

int main(){
    int b, l, a;
    while(1){
    printf("Digite o valor da base da árvore (Número ímpar, maior ou igual a 3): ");
    scanf("%d",&b);
    if (b < 3 || b % 2 == 0){
        printf("Erro, digite outro valor: ");
        continue;
    }
    printf("Digite o valor da largura do tronco (Número ímpar, maior ou igual a 1 e menor ou igual a metade da base): ");
    scanf("%d",&l);
    if (l < 1 || l % 2 == 0 || l > b / 2){
        printf("Erro, digite outro valor: ");
        continue;
    }
    printf("Digite o valor da altura do tronco (Valor maior ou igual a 2 e menor que a metade da base): ");
    scanf("%d",&a);
    if (a < 2 || a < b / 2){
        printf("Erro, digite outro valor: ");
        continue;
    }
    break;
    }
    int espacos = b / 2;
    for(int i = 1; i <= b; i+= 2){
        for(int j = 0; j < espacos; j++){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("*");
        }
        printf("\n");
        espacos--;
    }
    espacos = (b - l) / 2;
    for(int i = 0; i < a; i++){
        for (int j = 0; j < espacos; j++){
            printf(" ");
        }
        for (int k = 0; k < l; k++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}