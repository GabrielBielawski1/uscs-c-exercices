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
    else if (a>b)
    {
    printf("%d",a);}
    else if(b>a)
    {
    printf("%d",b);}
    else if (a==b)
    {
    printf("a igual a b\n");}
    return 0;
}