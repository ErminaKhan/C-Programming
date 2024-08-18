/*Write a C program to print star patterns based on user input. The program should allow the user to choose between two patterns:
    1.A regular right-angled triangle pattern where each row contains an increasing number of stars.
    2.A reversed right-angled triangle pattern where each row contains a decreasing number of stars.*/

#include <stdio.h>
//Function to print right angled star pattern
int starPatt(int rows){
    for (int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            printf("*",j);
        }
        printf("\n",i);
    }
}
//Function to print reverse right-angled star pattern
int reversePatt(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<=rows-i-1;j++){
            printf("*",j);
        }
        printf("\n",i);
    }
}
int main()
{
    int rows, a;
    label:
    printf("Enter 1 if u want aregular star pattern and 2 for reverse star pattern: ");
    scanf("%d",&a);
    if (a==1){
        printf("Enter how many rows u want: ");
        scanf("%d",&rows);
        starPatt(rows);
    }
    else if (a==2){
        printf("Enter how many rows u want: ");
        scanf("%d",&rows);
        reversePatt(rows);
    }
    else {
        printf("Invalid choice\n");
        goto label;
    }

    return 0;
}
