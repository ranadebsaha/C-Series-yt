// 0 1 1 2 3 5
#include<stdio.h>
void main(){
    int a=0,b=1,c,n,i;
    printf("Enter nth Position: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d  ",a); 
        c=a+b;
        a=b;
        b=c;
    } 
}