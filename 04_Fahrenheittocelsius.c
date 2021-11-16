#include <stdio.h>
#include <conio.h>
int main()
{
    float value, fahrenheit = 0, celsius = 0;
    char degree;
    printf("Enter the temperature value \n");
    scanf("%f", &value);
    printf("Enter the degree you want to convert into \n 'C' for celsius and 'F' for fahrenheit \n");
    scanf("%s", &degree);
    switch (degree)
    {
    case ('C'):

        celsius = 5 * (value - 32) / 9;
        printf("the temperature is %f celsius", celsius);
        break;
    case ('F'):
        fahrenheit = ((9 * value) / 5) + 32;
        printf("the temperature is %f fahrenheit", fahrenheit);
        break;
    default:
        printf("enter valid operator ");
    }
    return 0;
}