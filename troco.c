#include <stdio.h>


void Troco(int qtd_troco, int valor_50, int valor_20, int valor_10, int valor_5){

    if(qtd_troco > valor_50)
        qtd_troco = qtd_troco - valor_50;
        printf("%d", qtd_troco);
    if else(

}

int main () {
    int qtd_troco;
    int valor_50 = 50;
    int valor_20 = 20;
    int valor_10 = 10;
    int valor_5 = 5;
    scanf("%d", &qtd_troco);
    Troco(qtd_troco);
    return 0;
}
