#include <stdio.h>

int fatorial(int numero){
    if (numero == 0 || numero == 1){
        return 1;
    } else {
        return numero * fatorial(numero - 1);
    }
}
int combinacao(int linha, int coluna){
    return fatorial(linha) / (fatorial(coluna) * fatorial(linha - coluna));
}
void desenho_triangulo_de_pascal(int altura){
    for (int i = 0; i < altura; i++){
        for (int j = 0; j < altura - i - 1; j++){
            printf("  ");
        }
        for (int j = 0; j <= i; j++){
            printf("%4d",combinacao(i, j));
        }
        printf("\n");
    }
}
int main(){
    int altura;
    printf("Informe a altura do Triângulo de Pascal que você deseja definir: ");
    scanf("%d",&altura);
    desenho_triangulo_de_pascal(altura);
    return 0;
}