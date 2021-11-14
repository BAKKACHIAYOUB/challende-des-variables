#include <stdio.h>
#include <stdlib.h>

int main()
{   float nember1,nember2,nember3,nember4,somme,moyenne;
    printf(" veuillez entre les  nombres\n  " );
    scanf("%f %f %f %f" ,&nember1,&nember2,&nember3,&nember4 );
    somme= nember1+nember2+nember3+nember4;
     printf("la somme de ces nombres eSt : %.2f\n",somme);
    moyenne=somme/4;

    printf(" La moyenne de ces nombres eSt : %.2f\n",moyenne);

    return 0;
}
