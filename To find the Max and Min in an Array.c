/*C program to accept n number of elements from user (where n is defined by the user) and store data in an array and display the largest/smallest element of the array using loops*/
#include <stdio.h>
//function to find the maximum value in the array
int maximum(int arr[],int n){
    int max=-999;
    //loop to find the maximum value
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//function to find the minimum value of the array
int minimum(int arr[],int n){
    int min=9999;
    //loop to find the minimum
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    //declaring the array of size 'n'
    int arr[n];
    printf("enter the numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum number is %d and min is %d \n",maximum(arr,n), minimum(arr,n));
}