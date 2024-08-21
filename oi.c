#include <stdio.h>


void Maior(int a, int b, int x){
    if(a>b && a>x ){
        printf("%d",a);
    }else if(b>a && b>x) {
        printf("%d", b);
    }else if (x>b && x>a) {
        printf("%d", x);
    }
}

int main () {
    int a;
    int b;
    int x;
    scanf("%d %d %d", &a,&b,&x);
    Maior(a,b,x);
    return 0;
}
