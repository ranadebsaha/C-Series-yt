#include<stdio.h>
void main(){
    int n,sum=0,i;
    printf("Enter nth Position: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ 
        sum=sum+i;
    }
    printf("Sum of nth Natural number is: %d",sum);
}