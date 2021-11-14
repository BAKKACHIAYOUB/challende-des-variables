#include <stdio.h>
#include <stdlib.h>

int main()
{  float cerconference,rayon;
   const float pi=3.14;
   printf("veuillee entre le rayon ");
   scanf("%f",&rayon);
   cerconference= 2*pi*rayon;
   printf("la cerconference du cercle est : %.2f",cerconference);
    return 0;
}
