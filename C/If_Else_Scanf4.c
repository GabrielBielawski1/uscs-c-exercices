#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    int iJ, iI;
    iJ = 17;
    iI = 60;
int idade = 0;
printf("Digite a sua idade : \n");
scanf("%i", &idade);

if(idade <= iJ){

printf("Voce e jovem!");}
else
{
    
    if(idade >= iI)
    { printf ("voce e idoso\n");}
    
    else
    {
        if ((idade > iJ)&&(idade<iI)){

            printf("voce e de meia idade");
        }
    }
}
return 0;
}