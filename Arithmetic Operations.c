#include <stdio.h>

int main()
{
    int ope,a,b,i; //declaring variable: 'ope' for operation choices
    //loop  continues until the user chooses to exit byselecting option 5
    while(ope!=5){
    printf("Enter the following numbers for respective operations:\n 1.Add\n 2.Subs\n 3.Multi\n 4.Div\n 5.Exit\n");
    scanf("%d",&ope);
    //using the switch statement to execute the selected operation
    switch (ope){
        case 1:
        printf("enter two numbers:\n");
        scanf("%d%d",&a,&b);
        printf("the sum is %d\n",a+b);
        break;
        case 2:
        printf("enter two numbers:\n");
        scanf("%d%d",&a,&b);
        printf("the subs is %d\n",a-b);
        break;
        case 3:
        printf("enter two numbers:\n");
        scanf("%d%d",&a,&b);
        printf("the sum is %d\n",a*b);
        break;
        case 4:
        printf("enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("the sum is %d\n",a/b);
        break;
    }}
    //this message will be displayed when the loop ends, indicating that the program has finished
    printf("The program has ended.");
    return 0;
}