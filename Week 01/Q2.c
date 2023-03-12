//Program to check whether the number (input) is 
//positive, negative or zero

#include <stdio.h>

void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0){
        printf("Positive");
    }
    else if(a==0){
        printf("Zero");
    }    
    else{
        printf("Negative");
    }
}