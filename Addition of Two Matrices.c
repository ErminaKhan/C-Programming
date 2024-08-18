
#include <stdio.h>

int main()
{
    int rows,cols;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);
    printf("Enter the number of columns you want : ");
    scanf("%d",&cols);
    
    int Matrix1[rows][cols]; //declare the first matrix with user-defined rows and columns
    printf("Enter the digits in Matrix1:\n");
    for (int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            //input elements for the first matrix
            printf("The digit in [%d][%d] is: ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
        printf("\n");
    }
    
    int Matrix2[rows][cols]; //declare the first matrix with user-defined rows and columns
     printf("Enter the digits in Matrix2: \n");
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            //input elements for the first matrix
            printf("The digit in [%d][%d] is: ",i,j);
            scanf("%d",&Matrix2[i][j]);
        }
        printf("\n");
    }
    int result[rows][cols]; //declare result matrix to store addition of Matrix1 and Matrix2
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            result[i][j]=Matrix1[i][j]+Matrix2[i][j]; //add corresponding elements from Matrix1 and Matrix2
        }
    }
    //output the resulting matrix
    printf("The Resulting matrix is: \n");
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            printf("%d ",result[i][j]); //print each element in the result matrix
        }
        printf("\n");
    }

    return 0;
}