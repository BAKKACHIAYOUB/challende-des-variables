#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float y1,y2,c1,c2,YC;
    printf(" veuillez entrer le coordonnee de y1 ");
    scanf("%f",&y1);
    printf("veuillez entrer le coordonnees de y2 ");
    scanf("%f",&y2);
    printf("veuillez entrer le coordonnees de c1 ");
    scanf("%f",&c1);
    printf("veuillez entrer le coordonnees de c2 ");
    scanf("%f",&c2);
    YC= sqrt(pow(c2-c1,2)+pow(y2-y1,2));
    printf("la distence entre Y et C est %f : ",YC);


    return 0;
}s
