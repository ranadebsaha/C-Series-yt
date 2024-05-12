#include<stdio.h>
void main(){
    int n,i,sum=0;
    printf("Enter array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements one by one: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Array Elements are: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("\nSum of all elements in array: %d",sum);
}