//Program to take two array as input, merge them and print it in reverse order using loop

# include <stdio.h>

void merge(int a[],int m,int b[],int n){
    int c[m+n];
    for (int i=0;i<m;i++){
        c[i]=a[i];
    }
    for (int i=0;i<n;i++){
        c[m+i]=b[i];
    }
    printf("The elements of merged array in reverse order are:\n");
    for(int j=m+n-1;j>=0;j--){
        printf("%d\t",c[j]);
    }
}
void main(){
    int m,n;
    printf("Enter size of 2 arrays: ");
    scanf("%d %d",&m, &n);
    int a[m],b[n];
    printf("Enter elements of array1: ");
    for (int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of array2: ");
    for (int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    merge(a,m,b,n);
    
}