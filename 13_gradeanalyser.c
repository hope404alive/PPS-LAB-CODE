#include <stdio.h>
#include <conio.h>
int main()
{int marks;
 printf("Enter The Student Marks  obtained \n   ");
 scanf("%d",&marks);
marks=marks/10;
switch (marks)
{
case (9):
    printf("Grade A : Congratulations ");
    break;
case (8):

printf("You got A2 grade ");
break;
case(7):
printf("You got B1 grade ");
break;
case (6):
printf("You got B2 grade ");
break;
case (5):
printf("You got C grade ");
break;
case (4):
printf("You got D1 grade ");
break;
case (3):
printf("You got D2 grade ");
break;
case (2):
printf("You got E grade ");
break;
case (1):
printf("You got F grade ");
break;

default:
if(marks>=101)
printf("Invalid Marks Kindly recheck !");
    break;
}
return 0;
}