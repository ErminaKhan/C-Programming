#include <stdio.h>

int main()
{
    int a,b,c,i,result;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    // the loop continues until the user chooses to exit by entering 10
    while (result!=10){
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 10 to exit the poll\n");
    scanf("%d",&result);
    //using switch statement to perform the operation based to the input
        switch(result){
         case 1:
            i=a+b+c;
            printf("the addition of %d %d %d is %d\n",a,b,c,i);
            break;
         case 2:
            i=a-b-c;
            printf("the subtraction of %d %d %d is %d\n",a,b,c,i);
            break;
         case 3:
            i=a*b*c;
            printf("the multiplication of %d %d %d is %d\n",a,b,c,i);
            break;
    }
    //no default case as the loop will only continue unless 10
    
    
}
//message indicating that the program has ended
    printf("The program has ended");
    return 0;
}