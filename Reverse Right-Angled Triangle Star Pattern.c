
#include <stdio.h>
//function to print reverse right-angled triangle pattern of stars
int reversePatt(int rows){
    for(int i=0;i<rows;i++){
        //loop through each row
        for(int j=0;j<=rows-i-1;j++){
            printf("*",j);
        }
        printf("\n",i);
    }
}
int main()
{
    int rows;
    printf("Enter the no of rows u want: ");
    scanf("%d",&rows);
    
    reversePatt(rows);

    return 0;
}
