#include<stdio.h>
void main(){
    int n,i,max,min;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    max=min=arr[0];
    for(i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            continue;
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("\nMaximum: %d , Minimum: %d",max,min);
}