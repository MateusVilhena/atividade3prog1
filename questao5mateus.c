#include <stdio.h>

int main(){
    int altura;
    char preenchimento;
    printf("Digite a altura do triângulo: ");
    scanf("%d",&altura);
    printf("O quadrado vai ser preenchido (P) ou vazado (V)? ");
    scanf(" %c",&preenchimento);
    printf("\n");
    if (preenchimento == 'P' || preenchimento == 'p'){
        for(int i = 1; i <= altura; i++){
            for (int j = 1; j <= i; j++){
            printf("*");
            }
            printf("\n");
        }
    } else if (preenchimento == 'V' || preenchimento == 'v'){
        for(int i = 1; i <= altura; i++){
            for(int j = 1; j <= i; j++){
                if(j == 1 || j == i || i == altura){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else {
        printf("Erro, caractere inválido!");
    }
    return 0;
}