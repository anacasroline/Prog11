#include <stdio.h>
#include <math.h>

// Um tabuleiro que pergunta qual posição você está atualmente e depois quanto vocẽ tirou nos dados, e atualiza a sua posição final; Tabuleiro só tem 40 casas.
// Entrada: dois números de 1-6
// Saída: posição que você começou e a que você terminou
// Não pode valor nulo, não pode valores de dados maiores que 6, ou seja, não pode somar mais de 12 nos dados; não pode ultrapassar 40 casas

int soma_dados(int dado1, int dado2){
    int soma_dados = dado1 + dado2;

    if (dado1 > 6 || dado2 > 6){
        printf("Valor do dado tem que ser menor ou igual a 6\n");
        return -1;  // Retorna -1 em caso de erro
    }
    else if (dado1 <= 0 || dado2 <= 0){
        printf("Valor do dado tem que ser maior que 0\n");
        return -1;  // Retorna -1 em caso de erro
    }
    else{
        printf("A soma dos dados é: %d\n", soma_dados);
        return soma_dados;  // Retorna a soma dos dados
    }
}


int atualizar_pos(int pos_inicial, int soma_dados){
    // Atualiza a posição somando a soma dos dados à posição inicial
    // O (pos_inicial - 1) é feito para lidar com a base zero, e o +1 ajusta de volta para 1 a 40
    int pos_final = (pos_inicial + soma_dados - 1) % 40 + 1;
    printf("A posição final é: %d\n", pos_final);
    return 0;
}


int main(){
    int dado1, dado2, pos_inicial, soma;

    printf("Qual é a posição que você está? ");
    scanf("%d", &pos_inicial);
    printf("Quanto você tirou no dado 1? ");
    scanf("%d", &dado1);
    printf("Quanto você tirou no dado 2? ");
    scanf("%d", &dado2);

    soma = soma_dados(dado1, dado2);
    
    // Verifica se a soma dos dados é válida (não é -1)
    if (soma != -1) {
        atualizar_pos(pos_inicial, soma);
    }

    return 0;
}

