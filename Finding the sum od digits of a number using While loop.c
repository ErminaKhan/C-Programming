/*C program to find the sum of individual digits of a given number/sequencing of numbers. 
    Ex- consider 123 as an input . Sum of digits is 1+2+3 and output is 6.*/
    
#include <stdio.h>
int main()
{
    int num; //declaring variable
    printf("Enter any three digit number: ");
    scanf("%d",&num);
    
    int sum=0; //variable to accumulate the sum of digits
    //loop to calculate the sum of digits of the input number
    while(num>0){
        //extracting the last digit of 'num' and adding it to sum
        sum=sum+(num%10);
        //removing the last digit of 'num'
        num=num/10;
    }
    //display the sum of digits
    printf("The sum of all the digits of it is %d",sum);

    return 0;
}