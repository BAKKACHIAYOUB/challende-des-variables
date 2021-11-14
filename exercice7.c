#include <stdio.h>

  int main(){
    int a,b;

    float  division ,multiplication ,soustraction,modulo,addition;
	printf("entrer la valeur de A : ");
	scanf("%d",&a);
	printf("entrer la valeur de B :");
	scanf("%d",&b);
    soustraction=a-b;
    addition= a+b;
    multiplication =a*b;
    modulo =a%b;
    division =a/b;


 	printf(" soustraction est %.2f  addition est: %.2f  multiplication est : %.2f  modulo est : %.2f division est : %.2f",soustraction,addition,multiplication,modulo,division );

	return 0;


}
