#include <stdio.h>
int main (){
    
    int num;
    printf("Enter the number of digits u want in Fibonacci series: ");
    scanf("%d",&num); //storing the user input in 'num'
    
    //declaring an array to store Fibonacci series with 'num' elemets
    int Fib[num];
    Fib[0]=0;
    Fib[1]=1;
    //printing first two elemets of the Fibonacci series
    printf("%d %d",Fib[0],Fib[1]);
    for (int i=2 ; i<num ; i++){
        //calculating the next f number by adding the two preceding numbers
        Fib[i]=Fib[i-1]+Fib[i-2];
        //printing the current Fibonacci number
        printf(" %d",Fib[i]);
    }
    
    return 0;
}