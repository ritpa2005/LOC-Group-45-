//Program to count occurences of a number in an array using function

#include <stdio.h>

void occurs(int arr[],int n){
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    for(int j=0;j<n;j++){
        int c=0;
        for(int i=j;i<n;i++){
            if (arr[j]==brr[i]){
                c+=1;
                brr[i]=0;
            }
        }
        if (c!=0) printf("\t%d\t%d\n",arr[j],c);
    }
    
}

void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements\tOccurences\n");
    occurs(arr,n);
}
