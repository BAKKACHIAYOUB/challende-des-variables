#include <stdio.h>
#include <stdlib.h>

int main()
{   float mile,metre,km;

    printf("veuiller entrer la distence en metre ");
    scanf("%f",&metre);
    km = metre*1000;
    mile=km*1.609;
    printf("la transormation en mile est %f " ,mile);
    return 0;
}
