#include <stdio.h>
int main () {
int a;

printf("digite um numero: \n");
scanf("%d",&a);

if(a <= 0){
    printf("valor invalido\n");
}
else{
    printf("o valor e: \n%d", a*2);
}
    return 0;
}