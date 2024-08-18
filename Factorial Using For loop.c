#include <stdio.h>

int main()
{
    int a=1,num;
    printf("Write the number whose factorial you want:\n");
    scanf("%d",&num); //to take input
    //using for loop while i=1 and runs till i is equal to num
    for(int i=1;i<=num;i++){
        a=a*i;
    }
    printf("%d",a);
 
    return 0;
}
