#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    printf("Before Swapping: a= %d, b= %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping: a= %d, b= %d",a,b);
}