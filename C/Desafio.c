#include <stdio.h>
#include <stdlib.h>

int main () {
float media;
float nota1;
float nota2;
float nota3;

printf("Digite sua nota1: ");
scanf("%f",&nota1);
printf("Digite sua nota2: ");
scanf("%f",&nota2);
printf("Digite sua nota3: ");
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3) /3;

if(media> 7.0)
{
    printf("Aprovado");
}
else if  ((media >= 4.0) && (media < 7.0 ))
{
    printf("reprovado");
}
else if (media < 4.0)
{
    printf("de final");
}
}
