#include<stdio.h>
void main(){
    int a,b;
    // a=123 a=321
    // b=a%10
    // a=a/10
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Reverse number is: ");
    while(a>0){
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
}