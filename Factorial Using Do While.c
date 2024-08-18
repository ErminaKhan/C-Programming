#include <stdio.h>

int main()
{
    int a=1,i=1,num;
    printf("Enter the number whose factorial u want:\n");
    scanf("%d",&num);
    //do while loop will execute the code first then check the condition
    do {
        a=a *i;
        i++; //incrementing the value of i
    } while (i<=num); 
    //loop will continue as long as i is less than or equal to num
    printf("%d",a);

    return 0;
}
