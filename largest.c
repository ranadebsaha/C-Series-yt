#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b); // a=10 b=20
    if(a/b){ // 20/10
        printf("Largest number is: %d",a);
    }else{
        printf("Largest number is : %d",b);
    }
}