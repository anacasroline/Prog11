/*Escreva um programa chamado binario.c que aproxima a raiz qua-
drada de um double entre 0 e 100. Leia o n ́umero usando scanf e imprima uma

mensagem de erro caso ele esteja fora do intervalo v ́alido. Se for v ́alido, aproxime
a raiz quadrada usando o seguinte algoritmo: Inicialmente, sabemos que a resposta
est ́a no intervalo [0, 100]. Chute que a resposta  ́e a m ́edia deles: 50. Se 502
for
maior do que o n ́umero do qual queremos calcular a raiz quadrada, deduzimos que
a raiz de verdade est ́a no intervalo [0, 50]. Caso contr ́ario, deduzimos que est ́a em
[50, 100]. Ap ́os isso, fa ̧ca um novo chute no ponto m ́edio do novo intervalo. Continue
subdividindo o intervalo at ́e que seu comprimento fique menor que 10−6

(precis ̃ao
de 6 d ́ıgitos depois da v ́ırgula). Ap ́os isso, termine o algoritmo e imprima o ponto
m ́edio deste intervalo final.*/

#include <stdio.h>


int main(){
    double numero;
    int passos = 0;
    printf("Qual é o número?\n");
    scanf("%lf", &numero);

    if(numero < 0 || numero > 100){
        printf("Não está dentro do intervalo\n");
        return 0;
    }

    double menor = 0.0;
    double media;
    double maior = 100.0;

    while((maior - menor) >= 1e-6){
        media = (menor + maior)/2;
        if (media * media > numero) {
            maior = media; // A raiz está na metade inferior
        } else {
            menor = media; // A raiz está na metade superior
        }
        passos++;

}
    // Imprime o resultado final
    printf("Aproximação da raiz quadrada de %.2f: é %.6f e tem %d passos\n", numero, media, passos);
    return 0; // Finaliza o programa com sucesso
}