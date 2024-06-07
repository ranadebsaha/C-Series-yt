#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    printf("Before Swapping a=%d, b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping a=%d, b=%d\n",a,b);
}