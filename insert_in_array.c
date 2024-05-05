#include<stdio.h>
void main(){
    int n,i,val,pos;
    printf("Enter array Size: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter array elements one by one: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nYour Array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nEnter Element: ");
    scanf("%d",&val);
    printf("\nEnter Position: ");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)//[10,20, 30,40,50] pos=3
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    printf("Your Updated Array is: ");
    for(i=0;i<n+1;i++){
        printf("%d  ",arr[i]);
    } 
}