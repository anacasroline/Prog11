#include <stdio.h>

/*Uma partida de futebol profissional precisa de pelo menos 22 jogadores,
3  ́arbitros, e 1 campo. Escreva um programa de computador chamado futebol.c que

recebe trˆes n ́umeros inteiros (total de jogadores,  ́arbitros e campos) e imprime a quan-
tidade de partidas simultˆaneas que estas pessoas poderiam jogar. Por exemplo, com

67 jogadores, 10  ́arbitros e 5 campos, podemos jogar 3 partidas simultˆaneas, usando 66
jogadores, 9  ́arbitros, e 3 campos de futebol.*/

int simultaneo(int total_jog){
    if(total_jog < 0){
        printf("Entrada inválida\n");
        return 0;
    }
    int simultaneo = total_jog / 22;
    printf("Dá %d times\n", simultaneo);
    return simultaneo;
}

int simultaneo2(int arbitros){
    if(arbitros < 0){
        printf("Entrada inválida\n");
        return 0;
    }
    int simultaneo2 = arbitros / 3;
    printf("Dá %d times\n", simultaneo2);
    return simultaneo2;
}


int simultaneo3(int campos){
    if(campos < 0){
        printf("Entrada inválida\n");
        return 0;
    }
    int simultaneo3 = campos / 1;
    printf("Dá %d times\n", simultaneo3);
    return simultaneo3;
}

int minimo(int simultaneo, int simultaneo2, int simultaneo3){
    // Verifica o menor valor entre jogadores, árbitros e campos
    if(simultaneo <= simultaneo2 && simultaneo <= simultaneo3){
        return simultaneo;
    } else if(simultaneo2 <= simultaneo && simultaneo2 <= simultaneo3){
        return simultaneo2;
    } else {
        return simultaneo3;
    }
}

int main (){
    int total_jog, arbitros, campos, simultane, simultane2, simultane3, partidas;

    printf("São quantos jogadores?\n");
    scanf("%d", &total_jog);
    printf("São quantos arbitros?\n");
    scanf("%d", &arbitros);
    printf("São quantos campos?\n");
    scanf("%d", &campos);

    simultane = simultaneo(total_jog);
    simultane2 = simultaneo2(arbitros);
    simultane3 = simultaneo3(campos);

    // Calcula o número máximo de partidas simultâneas
    partidas = minimo(simultane, simultane2, simultane3);
    printf("Número de partidas simultâneas que podem ser jogadas: %d\n", partidas);

    return 0;
}