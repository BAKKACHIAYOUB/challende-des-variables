#include <stdio.h>
#include <stdlib.h>

int main()
{ float fahrenheit, celsius;

    printf("veuillez entrer la temperature en fahrenheit : ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)/1.8;{
    if(fahrenheit>38){
         printf("tres chaud");
    }

    else if(fahrenheit<=38&&fahrenheit>30){
        printf("chaud");
    }
    else if(fahrenheit<30&&fahrenheit>=15){
    printf("froid");}

    else{
        printf("tres froid");
    }

    }



    return 0;
}
