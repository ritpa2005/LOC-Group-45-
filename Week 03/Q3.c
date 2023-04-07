//Program to add two numbers using pointers

# include <stdio.h>

int pointerSum(int* p1,int* p2){
    return(*p1 + *p2);
}

void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int *p1=&a; 
    int *p2=&b;
    int s=pointerSum(p1,p2);
    printf("The sum of the two numbers is %d",s);
}