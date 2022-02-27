#include <stdio.h>
int main () {
    int a,b;
    printf("Digite o primeiro numero:\n");
    scanf("%d",&a);
    printf("Digite o segundo numero:\n");
    scanf("%d",&b);
    if((a<=0)&&(b<=0))
    {
    printf("valores invalidos\n");}   
    else
    {
    printf("O resultado e:\n%d",a+b);}
    
    return 0;
}