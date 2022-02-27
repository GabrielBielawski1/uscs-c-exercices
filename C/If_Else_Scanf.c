#include <stdio.h>
int main () {
    int a,b;
    printf("Digite o lado 1 do retangulo\n");
    scanf("%d",&a);
    printf("\nDigite o lado 2 do retangulo\n");
    scanf("%d", &b); 

if((a%2!=0)&&(b%2!=0))
{
     printf("valor invalido");
}
else {
    printf("\na area do triangulo e %d\n", a*b);
}

return 0;
}
