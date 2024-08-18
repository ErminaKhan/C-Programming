#include <stdio.h>

int main()
{
    int a,b; //declaring variables
    printf("Enter the numbers you wanna divide\n");
    scanf("%d %d",&a,&b);
    // a/b gives quotient and a%b gives remainder
    printf("the quotient of the numbers when divided is %d and remainder is %d",a/b,a%b);

    return 0;
}
