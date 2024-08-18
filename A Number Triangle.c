#include <stdio.h>
int series (int num)
{
    for (int i=1 ; i<=num ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main ()
{
    int num;
    printf("Enter no u u wnt series till: ");
    scanf("%d",&num);
    series(num);
    
    return 0;
}