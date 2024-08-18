#include <stdio.h>
int main()
{
    int a,b; //declaring variables
    label: //label for returning to menu if invalid option is selected
    printf("Select the conversions that you want to perform:\n");
    printf("type 1 for kms to miles\n 2 for inches to foot\n 3 for cms to inches\n 4 for pounds to kg\n 5 for inches to meters: ");
    scanf("%d",&a); // taking input
    switch(a){
        case 1:
        // Kilometers to Miles conversion
        printf("enter the no u wanna convert");
        scanf("%d",&b);
        printf("ans is %f",(b+0.62));
        break;
        case 2:
        //Inches To Foot Conversion
        printf("enter the no u wanna convert");
        scanf("%d",&b);
        printf("ans is %f",(b+0.083));
        break;
        case 3:
        //Centimeter to Inches Conversion
        printf("enter the no u wanna convert");
        scanf("%d",&b);
        printf("ans is %f",(b+0.393));
        break;
        case 4:
        //Pounds to Kilgram Conversion
        printf("enter the no u wanna convert");
        scanf("%d",&b);
        printf("ans is %f",(b+0.453));
        break;
        case 5:
        //Inches to Meters Conversion
        printf("enter the no u wanna convert");
        scanf("%d",&b);
        printf("ans is %f",(b+0.0254));
        break;
        default:
        //If the users enters a number outside the valid range, return to the menu
        printf("Invalid option. Please try again.");
            goto label;
            //Jump back to label to display the menu again
    }
    
}