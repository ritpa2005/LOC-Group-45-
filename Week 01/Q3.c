// Program to print the sum of the digits of a number (user input)
// using a do while loop

#include <stdio.h>

void main(){
    int n,s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do{
        s+=n%10;
        n=n/10;
    }while(n>0);
    printf("Sum of the digits is %d",s);
}