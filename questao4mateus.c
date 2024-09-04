#include <stdio.h>

int main(){
    int altura;
    char preenchimento;
    printf("Digite a altura do quadrado: ");
    scanf("%d",&altura);
    printf("O quadrado vai ser preenchido (P) ou vazado (V)? ");
    scanf(" %c",&preenchimento);
    printf("\n");
    if (preenchimento == 'P' || preenchimento == 'p'){
        for(int i = 0; i < altura; i++){
            for (int j = 0; j < altura; j++){
            printf("*");
            }
            printf("\n");
        }
    } else if (preenchimento == 'V' || preenchimento == 'v'){
        for(int i = 0; i < altura; i++){
            for(int j = 0; j < altura; j++){
                if(i == 0 || i == altura - 1 || j == 0 || j == altura - 1){
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