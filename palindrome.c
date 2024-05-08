#include<stdio.h>
void main(){
    int a,b,c,d=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=a;
    while(a>0){
        c=a%10;
        d=(d*10)+c;
        a=a/10;
    }
    if(b==d){
        printf("This number is a Palindrome number");
    }else{
        printf("This is not a palindrome number");
    }
}