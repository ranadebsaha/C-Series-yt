#include<stdio.h>
void main(){
    int n,i,j,temp;
    printf("Enter array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements one by one: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for(i=0,j=n-1;i<n/2,j>(n-1)/2;i++,j--){ 
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\nYour New Array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}