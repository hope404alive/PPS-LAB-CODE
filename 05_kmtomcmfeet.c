#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float km, mtrs, cm, feet, inches;
    printf("Enter the distance between the cities (in kilometers)\n");
    scanf("%f", &km);
    mtrs = km * pow(10, 3);
    cm = km * pow(10, 4);
    feet = km * 3280.84;
    inches = km * 39371.08;
    printf("the distance is \n %f meters \n %f centimeters \n",mtrs,cm);
    printf("the distance is %f feet \n %f inches",feet,inches);
    return 0;
    
}