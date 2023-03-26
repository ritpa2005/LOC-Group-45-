//Program to move all the negative elements to one side of array

# include <stdio.h>

void shift(int arr[],int n){
    for (int i=0;i<n;i++){
        if (arr[i]>=0){
            for(int j=i+1;j<n;j++){
                if (arr[j]<0){
                    int t = arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }   
    }
}

void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    shift(arr,n);
    printf("After shifting, the array is: ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    } 
}