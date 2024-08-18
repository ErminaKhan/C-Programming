/*Write a program in C to check whether a number is a prime number, not using the function*/
#include <stdio.h>

int main()
{
    int count, num;
    printf("Enter the number: ");
    scanf("%d",&num);
    //loop to check for divisors between 1 to num
    for(int i=1;i<=num;i++){
    if (num%i==0){
        count++;
        //incrementing count for each divisor
    }}
    if (count==1||count==2){
        printf("the number is prime");
    }
    else{
    printf("the number is not prime");
    }

    return 0;
}