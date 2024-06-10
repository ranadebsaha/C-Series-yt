#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6,7};
    int n,i;
    n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d",n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}