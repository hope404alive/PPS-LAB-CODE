#include <stdio.h>
#include <conio.h>
int main()
{
    int p, r, t;
    float Si;
    printf("Please Enter the principal amount \n");
    scanf("%d", &p);
    printf("Please Enter the rate of interest \n ");
    scanf("%d", &r);
    printf("Please Enter the time \n ");
    scanf("%d", &t);
    Si = (p * r * t) / 100;
    printf("The simple interest is %f  for the rate of %d percent  for the time %d years  ", Si, r, t);
    printf("The total amount is %f ",p+Si);
    return 0;
}