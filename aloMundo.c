/*
Descrição: dados três números inteiros, retorna o maior
Entrada: os três números inteiros
Saída: o maior número encontrado
Defesa: não se aplica (não há restrições de entrada)
*/

#include <stdio.h> 

int main(){
    //dicionário de dados
    int a,b,c;
    int maior;
    //obtem os três números
    printf("Escreva três números inteiros\n");
    scanf("%d %d %d",&a,&b,&c);
    // encontra o maior
    if (a > b && a > c){
        maior = a;
    }
    else if(b > c){
        maior = b;
    }
    else{
        maior = c;
    }
    //exibe o resultado
    printf("O maior valor é :%d\n", maior);
    return 0;
}