#include <stdio.h>

int main()
{
    int a=765,b,c,d;
    printf("Guess the number!!!\n HINTS- The number consists of three digits\n The numbers are in chronological order\n");
    printf("Guess the value of the hundredth place\n");
    
    while (b!=7) {
            scanf("%d",&b);
           switch (b){
               case 1:
               printf("Incorrect guess. The correct digit exceeds your input.");
               break;
               case 2:
               printf("Incorrect guess. The correct digit exceeds your input.");
               break;
               case 3:
               printf("Incorrect guess. The correct digit exceeds your input.");
               break;
               case 4:
               printf("Incorrect guess. The correct digit exceeds your input.");
               break;
               case 5:
               printf("r");
               break;
               case 6:
               printf("Enter a number that is one position away from your previous attempt in the numerical sequence.");
               break;
               case 8:
               printf("You're on the right track! Try reducing your guess by 1.\n");
               break;
               case 9:
               printf("You're on the right track! Try reducing your guess by 2.\n");
               break;
               
           }}
    printf("The correct answer is affirmative. The digit at the hundredth place is 7.\n");
    printf("Guess the value at the tenth position. Remember that it is a single increment/decrement away from the hundredth digit.");
           while (c!=6) {
            scanf("%d",&c);
           switch (c){
               case 8:
               printf("You're on the right track! Try reducing your guess by 2.\n");
               break;
            }
               if (c<6){
                   printf("Incorrect guess. The correct digit exceeds your input.");
               }
               else if (c==9){
                   printf("You're on the right track! Try reducing your guess by 3.");
               }
           }
    printf("The correct answer is affirmative. The digit at the tenth place is 6.\n Using the tenth digit as a reference point, calculate the final digit by incrementing/decrementing by a single unit.");
    while (d!=5) {
        scanf("%d",&d);
           switch (d){
               case 8:
               printf("You're on the right track! Try reducing your guess by 3.\n");
               break;
               case 7:
               printf("You're on the right track! Try reducing your guess by 2\n");
               break;
               
           }
        if (d<5){
                   printf("Incorrect guess. The correct digit exceeds your input.");
               }
               else if (d==9){
                   printf("You're on the right track! Try reducing your guess by 4.");
               }
    }
        printf("The number is %d.",a);
    return 0;
}
