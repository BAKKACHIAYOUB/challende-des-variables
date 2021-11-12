#include <stdio.h>
#include <stdlib.h>

int main()
{   float mile,metre,km;

    printf("veuiller entrer la distence en mile ");
    scanf("%f",&mile);
    metre=(mile/1.609)*1000;
    km=mile/1.609;
    printf("la transormation en metre est %f " ,metre);
    return 0;
}
