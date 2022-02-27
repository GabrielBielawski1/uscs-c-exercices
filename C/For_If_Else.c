#include <stdio.h>
int main (){
    int valor = 0;
    int i = 0;
    for (i=0; i<5; i++)

    {
      printf("Digite o numero\n");
      scanf("%d", &valor);
      
        if(valor %2 == 0){
            printf(" \npar ");
        }
        else{
            printf(" \nimpar ");
        }
    }
    return 0;
}