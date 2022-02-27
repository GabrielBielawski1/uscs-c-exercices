#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    int a = 4;
    int b = 33;
    int c;
printf("Digite um numero: \n");
scanf("%i", &c);
    
 
 if((a>c)||(c<b))
        
    {
    printf("c esta entre b e a");
    
    }
    else {
        printf("c e maior que b e a");
    }
     
        


    return 0;
}