#include <stdio.h>

int main()
{
    int a=1,i=1,num;
    printf("Enter the number whose factorial you want:");
    scanf("%d",&num); //to take input
    //the loop will continue as long as i is less than or equal to num
    while (i<=num){
        a=a*i;
        i++;
    }
    printf("%d",a);

    return 0;
}
