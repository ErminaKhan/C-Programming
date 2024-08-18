#include <stdio.h>
int main ()
{
    int rows=2; //define the number of rows of the matrix
    int columns=2; //define the number of columns of the matrix
    //initializing 2x2 matrices with pre-defined values
    int arr [2][2]={
        { 1,2 },
        { 3,4 }
    };
    //loop through rows
    for (int i=0 ; i<rows ; i++){
        //loop through columns
        for (int j=0 ; j<columns ; j++){
            printf("%d ",arr[i][j]); //print each element of the matrix
        }
        printf("\n");
    }
    
    return 0;
}