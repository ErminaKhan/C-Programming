
#include <stdio.h>
void Star1 (int rows){
    for (int r=0 ; r<=rows ; r++){
    printf("-");
    }
    printf("\n");
    for (int i=1 ; i<=rows ; i++){
        printf("|");
        for(int j=1 ; j<=rows ; j++){
            if (j<=i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("|\n");
    }
    for (int r=0 ; r<=rows ; r++){
        printf("-");
    }
}
void Star2 (int rows){
    for(int r=0 ; r<=rows ; r++){
        printf("-");
    }
    printf("\n");
    for (int i=0 ; i<rows ; i++){
        printf("|");
        for (int j=0 ; j<rows ; j++){
            if (j<rows-i-1 && i>=0){
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("|\n");
    }
    for(int r=0 ; r<=rows ; r++){
        printf("-");
    }
}
void Star3 (int rows){
    for (int r=0 ; r<rows ; r++){
        printf(" -");
    }
    printf("\n");
    for (int i=0 ; i<rows ; i++){
        printf("|");
        for (int j=0 ; j<(rows*2) ; j++){
            if (j<rows-1-i && i>=0){
                printf(" ");
            }
            else if (j>(rows-1)+i && i>=0){
                printf(" ");
            }
            else {
                printf("*");
            }
        }
    printf("|\n");
    }
    for (int r=0 ; r<rows ; r++){
        printf(" -");
    }
}
void Star4 (int rows){
    for (int r=0 ; r<rows ; r++){
        printf("-");
    }
    printf("\n");
    for (int i=0 ; i<rows ; i++){
        printf("|");
        for (int j=0 ; j<rows ; j++){
            if (j<rows-i && i>=0){
            printf("*");
        }
        else {
            printf(" ");
        }
        }
        printf("|\n");
    }
    for (int r=0 ; r<rows ; r++){
        printf("-");
    }
}
void Star5 (int rows){
    for(int r=0 ; r<rows; r++){
        printf("-");
    }
    printf("\n");
    for (int i=0 ; i<rows ; i++){
        printf("|");
        for (int j=0 ; j<rows ; j++){
            if (j>=i && i>=0){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("|\n");
    }
    for (int r=0 ; r<rows ; r++){
        printf("-");
    }
}
int main()
{
    int option,rows;
    label:
    printf("Enter 1 for a RIGHT ANGLED TRIANGLE STAR PATTERN\n Enter 2 for a MIRRORED OF RIGHT ANGLED TRIANGLE STAR PATTERN\n Enter 3 for a TRIANGULAR STAR PATTERN\n Enter 4 for REVERSE RIGHT ANGLED TRIANGLE STAR PATTERN\n Enter 5 for MIRRORED REVERSE RIGHT ANGLED TRIANGLE STAR PATTERN \n");
    scanf("%d",&option);
    switch (option){
        case 1:
        printf("Enter the number of rows u want: ");
        scanf("%d",&rows);
        Star1(rows);
        break;
        case 2:
        printf("Enter the number of rows u want: ");
        scanf("%d",&rows);
        Star2(rows);
        break;
        case 3:
        printf("Enter the number of rows u want: ");
        scanf("%d",&rows);
        Star3(rows);
        break;
        case 4:
        printf("Enter the number of rows u want: ");
        scanf("%d",&rows);
        Star4(rows);
        break;
        case 5:
        printf("Enter the number of rows u want: ");
        scanf("%d",&rows);
        Star5(rows);
        break;
        default:
        printf("Invalid option\n");
        goto label;
    }
    
    return 0;
}