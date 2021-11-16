#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float Basic_salary, dearness_allowance = 0, rent_allowance = 0;
    ;
    printf("Enter the basic salary \n");
    scanf("%f", &Basic_salary);
    dearness_allowance = Basic_salary * 40 / 100;
    rent_allowance = Basic_salary * 20 / 100;
    float gross_salary = Basic_salary + dearness_allowance + rent_allowance;
    printf("The Basic Salary is  Rs. %f \n The dearness allowance is Rs. %f \n ", Basic_salary, dearness_allowance);
    printf(" The rent allowance is Rs. %f \n The Gross Salary of Ramesh = Rs. %f ", rent_allowance, gross_salary);

    return 0;
}
