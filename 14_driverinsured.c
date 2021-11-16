#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    // Driver--marital status ,gender,age
    printf("enter the driver marital status \n");

    char maritalstatus[100 ], gender[100];
    int age;
    scanf("%s", &maritalstatus);

    if (maritalstatus == "married")
    {
        printf("youre insured");
      return 0;  }
    
else if {


    printf("enter the driver gender \n");
    scanf("%s", &gender);
    printf("enter the driver age \n");
    scanf("%d", &age);
      else if (maritalstatus == "unmarried" && gender == "male" && age >= 35)
    {
        printf("you are insured \n");
    }
    else if (maritalstatus == "unmarried" && gender == "female" && age >= 25)
    {
        printf("you are insured \n");
    }
    else
    {
        printf("not insured ");
    }
}
    return 0;
}