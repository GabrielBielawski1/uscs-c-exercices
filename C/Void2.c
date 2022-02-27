#include <stdio.h>

int printmsg(void);
int main () 
{
printf("\nInicio do Programa 02");
    int codretorno;
    codretorno = printmsg();
    printf("\ncodretorno = %d",codretorno);
    printf("\nFim do Programa 02");
    return 0;
}

int printmsg(void) {
    printf("\nHello Word...");
return 0;
}