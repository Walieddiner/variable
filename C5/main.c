#include <stdio.h>
#include <stdlib.h>

int main()
{float temperature, solide, liquide, gaz;
   printf("donne la temperature en Celsius de l'eau:") ;
   scanf("%f" ,& temperature);
   if (temperature< 0 )  printf("Solide") ;
   if ( temperature < 100) printf("liquide");
   if (temperature >= 100) printf("gaz");


}
