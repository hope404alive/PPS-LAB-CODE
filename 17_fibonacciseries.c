#include <stdio.h>
#include <conio.h>
int main()
{
    int a=1,b=1,c=0;
    for(int i =1;i<=10;i++)
    {
        c=a+b;
     printf("%d \n ",c);
        a=b;

        b=c;
    }
return 0;
}