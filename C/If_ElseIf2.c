#include <stdio.h>
int main () {
    int a,b;
    printf("digite o primeiro numero: \n");
    scanf("%d", &a);
    printf("digite o segundo numero: \n");
    scanf("%d", &b);
    if((a<= 0)&&(b<=0)){
        printf("Valores entrados invalidos");

    }
    else if (a==b){
        printf("Os valores entrados sao iguais");
    }
    else if(a>b) {
        printf("%d", a);
    }
    else if(b>a) {
        printf("%d", b);
    }
    return 0;
}