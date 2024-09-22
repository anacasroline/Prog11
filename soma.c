#include <stdio.h>

int somaDig(int x){
    int soma = 0;
    while(x){
        soma = soma + x % 10;
        x = x / 10;
    }
    return soma;
}

int main(){
    int a, b, soma;
    
    printf("Escreva a");
    scanf("%d", &a);
    printf("Escreva b");
    scanf("%d", &b);

    if(a < 0 || b < 0){
        printf("Entrada inválida");
        return -1;
    }

    soma = somaDig(a);
    

    if(soma == somaDig(b)){
        printf("Verdadeiro: soma de a = %d e soma de b = %d\n", soma, somaDig(b));
    } else {
        printf("Falso: soma de a = %d e soma de b = %d\n", soma, somaDig(b));
    }

    return 0;
}