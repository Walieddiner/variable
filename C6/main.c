#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b;
printf("donner la premeire nomber: ");
scanf("%f", &a);
printf("donner le deuxieme nomber :");
scanf("%f", &b);

printf("\n\n\n\n");

printf("\n a + b = %.2f", a + b);
printf("\n a - b = %.2f", a - b);
printf("\n a _ b = %2.f", a / b);
printf("\n a * b = %2.f", a * b);
}
