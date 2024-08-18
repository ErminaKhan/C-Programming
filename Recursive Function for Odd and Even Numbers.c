/*Write a C program that prints the numbers from 1 to 10 in such a way that every odd number gets added by 1 and even number gets subtracted by 1*/
#include <stdio.h>
//function declaration
void odd();
void even();
int n=1;
void odd (){
    if (n<=10){
        printf("%d ",(n+1));
        n++; // increment n to more to the next number
        even();
    }
}
void even(){
    if (n<=10){
        printf("%d ",(n-1));
       n++;
        odd(); // increment n to more to the next number
    }
}
int main(){
    odd(); // starting by calling the odd function
}