#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    n = 13 + 10 * 30;
    //precendence of multiplication is greater than addition
    printf(" 13 + 10 * 30 = %d \n", n);
    /*associativity when precendence operators are same
    (left or right) or  (right to left) */
    n = 10 / 20 * 30;
    //left to right associativity
    printf(" 10 / 20 * 30 = %d ", n);
    return 0;
}

