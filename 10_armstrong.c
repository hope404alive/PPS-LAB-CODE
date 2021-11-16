
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int num, n, rem, result;
    result = 0;
    printf("Enter the number \n");
    scanf("%d", &num);
    num = n;
    while (num != 0)
    {
        rem = num % 10;
        result = result + round(pow(rem, 3));
        num = num / 10;
    }
    if (n == result)
    {
        printf("armstrong number \n");
    }
    else
    {
        printf("not a armstrong number \n");
    }
    return 0;
}