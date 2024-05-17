#include<stdio.h>
void main(){
    int n,i,num;
    printf("Enter array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements one by one: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Array is : ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nEnter number which you want to delete: ");
    scanf("%d",&num);
    printf("Your updated array is: ");
    for(i=0;i<n;i++){
        if(arr[i]==num){
            continue;
        }
        printf("%d  ",arr[i]);
    }
}