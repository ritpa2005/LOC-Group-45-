//Program to print the following pattern using loop
//* * * * *
//* * * *
//* * *
//* * 
//*

#include <stdio.h>

void stars(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void main(){
    int n=5;
    stars(n);
}