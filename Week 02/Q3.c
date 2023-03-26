// Program to sort an array using function

#include <stdio.h>

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if (arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
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
    sort(arr,n);
    printf("The sorted array is:\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}