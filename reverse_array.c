#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter array Size: ");
    scanf("%d",&n);
    int arr[n],newarr[n];
    printf("Enter array elements one by one: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--){
        newarr[i]=arr[j]; 
    }
    printf("\nYour New Array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",newarr[i]);
    }
}