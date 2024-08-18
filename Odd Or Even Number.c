#include <stdio.h>

int main()
{
    int a; //declaring variable to store input
    printf("Enter a number:");
    scanf("%d",&a);
    //checking if the number is odd or even
    if (a%2==0){
        printf("The number %d is even\n",a);
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}