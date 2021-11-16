#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter any number \n");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
        printf("the number %d is even", num);
    }
    else if (num % 2 == !0)
    {
        printf("the number is odd", num);
    }
    return 0;
}
