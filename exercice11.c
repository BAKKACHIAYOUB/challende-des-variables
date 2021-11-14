#include <stdio.h>
#include <stdlib.h>

int main()
{ float longueur,largeur,la_circonference_d_rectangle;

    printf("veuillez entrer la valeur de longueur");
    scanf("%f",&longueur);
    printf(" veuillez entrer la valeur de largeur");
    scanf("%f",&largeur);
    la_circonference_d_rectangle= 2*(longueur+largeur);
    printf("la circonference d'un rectangle est : %.2f ",la_circonference_d_rectangle);
    return 0;
}
