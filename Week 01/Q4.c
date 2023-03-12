//Programs to input two numbers and perform all arithmetic 
//operations using switch case

#include <stdio.h>

void main(){
    int a,b,i=1;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    switch(i){
        case(1):
            printf("The sum is %d\n",a+b);
        case(2):
            printf("The difference is %d\n",a-b);
        case(3):
            printf("The product is %d\n",a*b);
        case(4):
            printf("The quotient is %d\n",a/b);
        default:
            printf("The remainder is %d\n",a%b);
    }
}