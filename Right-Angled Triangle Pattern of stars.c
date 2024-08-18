/*Write a C program to print a right-angled triangle pattern of stars (*). The number of rows in the triangle should be specified by the user.*/

#include <stdio.h>
// Function to print a star pattern based on the number of rows
void starPatt(int rows){
    //loop through each row
    for (int i=0;i<rows;i++){
        //loop through each column in the current row
        for(int j=0;j<=i;j++){
            printf("*",j);
        }
        //moving to the next line after printing stars in current row
        printf("\n",i);
    }
}
int main()
{
    int rows;
    printf("Enter the number of rows u want: \n");
    scanf("%d",&rows);
    
    starPatt(rows); //calling out the function
    
    return 0;
}