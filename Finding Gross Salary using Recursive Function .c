/*C program to calculate the basic salary of an employee and calculate gross salary according to the given conditions
Formula: Gross Salary= Basic Salary + Allowances
    1. Basic Salary <= 10000: HRA=20% , DA=80%
    2. Basic Salary is between 10001 to 20000: HRA=25% , DA=80%
    3. Basic Salary >= 20001: HRA=30% , DA=95% */
    
#include <stdio.h>
int gross (int num){
    if (num<=10000){
        return (num+0.2*num+0.8*num); // Adding base salary+ 20% bonus +80% allowance
    }
    else if (10001<=num<=20000){
        return (num+0.25*num+0.9*num); // Adding base salary+ 25% bonus+ 90% allowance
    }
    else{
        return (num+0.3*num+0.95*num); // Adding base salary+ 30% bonus+ 95% allowance
    }

}
int main()
{
    int salary;
    printf("Enter your salary: ");
    scanf("%d",&salary);
    
    //Calculating and displaying gross salary
    printf("Your gross salary is %d",gross(salary));
    
    return 0;
}