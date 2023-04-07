//Program to  find factorial of a number using pointers

# include <stdio.h>

int factorial(int* p){
    if(*p<0) {printf("Invalid number"); return -1;}
    if((*p==0)||(*p==1)||(*p==2)) return 1;
    int fact=1;
    int m= *p;
    for (int i=2;i<=m;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int *p=&n;
    int f=factorial(p);
    if (f!=-1) printf("The factorial of number %d is %d",n,f);
    return 0;
}