#include<stdio.h>
#include<stdlib.h>

int main()
{

float a,b,c;
float moyenne;
float som;
printf("Entrer le premiere nombre ");
scanf("%f",&a);
printf("Entrer le deuxieme nombre ");
scanf("%f",&b);
printf("Entrer le troixieme nombre ");
scanf("%f",&c);
som = 2+3+5;
moyenne =((a*2)+(b*3)+(c*5))/som;

printf("Le moyenne ponderee est :%.2f",moyenne);


return 0;
}
﻿

