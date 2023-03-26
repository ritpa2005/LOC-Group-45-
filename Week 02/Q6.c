//Program to find maximum occurring integer in an array 

# include <stdio.h>

int maxoccur(int arr[],int n){
    int m=0,mc=0;
    for(int j=0;j<n;j++){
        int c=0;
        for(int k=0;k<n;k++){
            if (arr[k]==arr[j]) c+=1;
        }
        if (c>mc){
            m=arr[j];
            mc=c;
        }
    }
    return m;
}
void main(){
    int n;
    printf("Enter the size of array:");
    scanf ("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Maximum occuring integer is %d",maxoccur(arr,n));
}