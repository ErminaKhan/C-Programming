#include <stdio.h>
// Fibonacci Series= 0, 1, 1, 2, 3, 5, 8, 13, 21..
int main ()
{
    int prev=0, nxt=1, num; 
    printf("Enter the number you want Fibonacci series till: ");
    scanf("%d",&num);
    printf("%d %d ",prev,nxt); //printing the first two digits of the Fibonacci series
    //loop to generate the Fibonacci series up to the specified limit
    for (int i=1; i<=num ; ){
        printf("%d ",i);
        prev=nxt; //storing the value of nxt as prev
        nxt=i; // storing the value of i as nxt
        i=prev+nxt; // computing the next Fibonacci number
    }
    
    return 0;
}