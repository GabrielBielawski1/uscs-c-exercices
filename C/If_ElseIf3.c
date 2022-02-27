#include <stdio.h>
int main () {
    int x = 0;
    int y = 0;
    int z = 0;
    printf ("Digite o  1º numero\n");
    scanf ("%d",&x);
    printf ("Digite o 2º numero\n");
    scanf ("%d",&y);
    printf ("Digite o 3º numero\n");
    scanf ("%d",&z);

    if (x>y && x>z){
        printf ("O 1º e o maior : %d",x);
    }
    else if (y>x && y>z ){
        printf ("O 2º e o maior : %d",y);
    }
    else{
        printf("O 3º e o maior numero : %d ",z);
    }




return 0;
}