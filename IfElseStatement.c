#include <stdio.h>

int main()
{
    int a; //creating variable input for option input
    printf("If you are a student who passed maths exam press 1\n");
    printf("If you are a student who passed science exam press 2\n");
    printf("If you are a student who passed maths and science both press 3\n");
    scanf("%d",&a); //used to take input
    //to determine the prize based on passed subjects
    if (a==1){
        printf("You have earned urself a prize of 15 ruppees");
    }
    else if (a==2){
        printf("You have earned urself a prize of 15 ruppees");
    }
    else{
        printf("You have earned urself a prize of 45 ruppees");
    }
    return 0;
}
