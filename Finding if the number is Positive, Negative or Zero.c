#include <stdio.h>

int main()
{
    //declaring variable to store input
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    //Checking if the number is positive, zero or negative
    if (a<0){
        printf("The number is negative");
    }
    else if (a==0){
        printf("the number is zeroooo");
    }
    else{
        printf("The number is positive");
    }

    return 0;//indicating that the program has executed successfully
}
