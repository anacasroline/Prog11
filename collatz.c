/*Escreva um programa chamado collatz.c que recebe um n ́umero inteiro positivo N e
testa o comportamento da sequˆencia para todos os n ́umeros de 1 at ́e N. 

No fim, imprima
o n ́umero que teve a sequˆencia mais comprida, e o n ́umero de passos que levou. Caso
dois n ́umeros tenham sequˆencias igualmente compridas, prefira o menor deles.
Dica: A sequˆencia pode passar por n ́umeros muito grandes. Use long long int.
Dica: Para ler e imprimir long long int, use %lld.
Dica: Crie uma função auxiliar que recebe x0 e retorna o comprimento de sua sequˆencia.
Dica: Use a flag de compila ̧c ao -O2 para deixar o programa mais rapido.*/

#include <stdio.h>

long long int collatz(long long int numero) {
    long long int comprimento = 0;
    while (numero != 1) {
        if (numero % 2 == 0) {
            numero /= 2;
        } else {
            numero = 3 * numero + 1;
        }
        comprimento++;
    }
    return comprimento;
}

int main() {
    long long int numero;

    printf("Digite um número inteiro positivo:\n");
    scanf("%lld", &numero);

    if (numero <= 0) {
        printf("Entrada Inválida\n");
        return 0;  
    }

    long long int max_comprimento = 0;
    long long int max_numero = 1;

    for (long long int i = 1; i <= numero; i++) {
        long long int comprimento_atual = collatz(i);
        if (comprimento_atual > max_comprimento) {
            max_comprimento = comprimento_atual;
            max_numero = i;
        }
    }

    printf("Número com a sequência mais longa: %lld\n", max_numero);
    printf("Comprimento da sequência: %lld\n", max_comprimento);
    
    return 0;  // Saída com sucesso
}
