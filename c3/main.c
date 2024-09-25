#include <stdio.h>
#include <stdlib.h>

int main()
{
  float kilometre, yards;
  printf("donner votre distance en kilometres:");
  scanf("%f",&kilometre);
  yards=kilometre*1093.61;
  printf("votre distance en miles %f",yards );
}
