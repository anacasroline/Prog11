#include <stdio.h>

double funcao (double f1, double f2, double f3){
    if((f1 >= 2000 && f1 <= 5000) || (f2>=2000 && f2 <=5000) || (f3>= 200 && f3 <= 5000)){
        printf("1\n");
        return 1;
    }
    else{
        printf("0\n");
        return 0;
    }
}

int main(){
    double f1, f2, f3;
    printf("Fale 3 frequencias");
    scanf("%le, %le, %le" , &f1, &f2 ,&f3);

    funcao(f1,f2,f3);
    return 0;
}