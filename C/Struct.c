#include <stdio.h>

int printmsg(int n);
int main () 
{
printf("\nInicio do Programa 03");
    int codretorno, n;
    printf("Entre com um valor inteiro");
    scanf ("%d",&n);
    codretorno = printmsg(n);
    printf("\ncodretorno = %d",codretorno);
    printf("\nFim do Programa 03");
    return 0;
}

int printmsg(int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nHello Word...");
    }
    
    printf("\ntexto impresso %d vezes",n);
return 0;
}