//Program to copy the elements of one array into another array

# include<stdio.h>

void add(int arr1[],int n1,int arr2[],int n2){
    arr1[n1]=arr1[n1+n2];
    for(int j=0;j<n2;j++){
        arr1[n1+j]=arr2[j];
    }
}
void main(){
    int n1,n2;
    printf("Enter the sizes of array n1 and n2:");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("\nEnter elements of array1: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter elements of array2: ");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    add(arr1,n1,arr2,n2);
    printf("\nThe elements of the array after copying are: ");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",arr1[i]);
    }
}