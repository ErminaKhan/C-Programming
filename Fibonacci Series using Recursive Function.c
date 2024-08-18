#include <stdio.h>
// 0,1,1,2,3,5,8,13,21,34..

int fib(int num){
    //base case: if number is 0 or 1 return the number itself
    if (num<=1)
        return num;
    
    else {
    //Recursive case: sum of the two preceding Fibonacci Numbers
        return fib(num-1)+fib(num-2);
    }
}

int main()
{
    int a; //declaring variables
    printf("Enter number u want fibonacci series till: ");
    scanf("%d",&a);
    //loop to print the Fibonacci numbers up to the user-defined limit
    for(int i=0;i<a;i++){
    if(fib(i)<=a){
        printf("%d\n",fib(i));
    }
    else{
        break; // to stop printing if the Fibonacci number exceeds the upper limit
    }
}

    return 0;
}
