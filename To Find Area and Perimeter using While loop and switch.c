/* C progam to calculate the area and perimeter of square, rectangle and triangle. Take sides input from the user. */
#include <stdio.h>

int main()
{
    int shape;   // declaring input for shape
    //while loop to allow user perform calculations until they choose to exit
    while(shape!=4){
    printf("Enter 1 if u wanna calculate perimeter and area of rectangle\n Enter 2 for triangle\n Enter 3 for perimeter of square\n Enter 4 to exit: ");
    scanf("%d",&shape);
    switch (shape){
        case 1:
        //variables for rectangule dimensions
            int length,breadth;
            printf("Enter the length and breadth: \n");
            scanf("%d%d",&length, &breadth);
            printf("the perimeter of rectangle is %d and area is %d.\n",2*(length+breadth),(length*breadth));
            break;
        case 2:
        //variables for triangle dimensions
            int a,b,c,h;
            printf("enter all the 3 sides (a,b,c) of the triangle and height: \n");
            scanf("%d%d%d%d",&a,&b,&c,&h);
            printf("the perimeter of triangle is %d and area is %d\n",(a+b+c),(0.5*b*h));
            break;
        case 3:
        //variable for square dimensions
            int side;
            printf("enter the length of side of square: ");
            scanf("%d",&side);
            printf("the perimeter of square is %d and area is %d\n",(4*side),(side^2)); 
            break;
        case 4:
        // to exit
            break;
        default:
        //to handle invalid input
            printf("Invalid choice. Please enter the number between 1 to 4\n");
        }
    }
    //Message indicating that the program has ended
    printf("The program has ended");

    return 0;
}