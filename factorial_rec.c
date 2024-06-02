#include<stdio.h>
int fact(int);
void main(){
    int n,f;
    printf("Enter a Number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of this number is: %d",f);
}

int fact(int a){ // a=3 
    if(a==1){
        return 1;
    }else{
        return (a* fact(a-1));
    }
}