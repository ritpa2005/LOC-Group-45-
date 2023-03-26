//Program to print the following pattern using loop
//1
//2    3
//4    5    6
//7    8    9   10
//11   12   13  14   15

#include <stdio.h>

void func(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        int g=1+(i*i+i)/2;
        for(int j=k;j<g;j++){
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
}
void main(){
    int n=5;
    func(n);
}
