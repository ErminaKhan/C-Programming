#include <stdio.h>
//factorial of a number
// factorial of n= n*(n-1)!

int factorial (int number){
    //if the number is 0 or 1 returning 1 (0!=1 and 1!=1)
    if (number==1||number==0){
        return 1;
    }
    else {
        return (number*factorial(number-1));
    }
}
int main()
{
    int num; //declaring variables
    printf("enter no u want factorial of:");
    scanf("%d",&num);
    printf("the factorial is %d",factorial(num)); //calling the function factorial (num)

    return 0;
}