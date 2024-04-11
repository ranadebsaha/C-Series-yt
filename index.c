#include<stdio.h>
void main(){
    // printf("Hello world");
    // int a,b,c;
    // a=10;
    // b=20;
    // c=a+b;
    // printf("%d + %d = %d",a,b,c);
    // int a,b,c;
    // printf("Enter a number: ");
    // scanf("%d",&a);
    // printf("Enter another number: ");
    // scanf("%d",&b);
    // c=a+b;
    // printf("%d + %d = %d",a,b,c);
    // int a,b,c;
    // printf("Enter 1st number: ");
    // scanf("%d",&a);
    // printf("Enter 2nd number: ");
    // scanf("%d",&b);
    // printf("Enter 3rd number: ");
    // scanf("%d",&c);
    // if(a==b && b==c){
    //     printf("1st, 2nd and 3rd numbers are equal");
    // }
    // else if(a>b && a>c){
    //     printf("Largest number is: %d",a);
    // }else if(b>a && b>c){
    //     printf("Largest number is: %d",b);
    // }
    // else{
    //     printf("Largest number is: %d",c);
    // }
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // if(n%2==0){
    //     printf("%d number is Even",n);
    // }else{
    //     printf("%d number is odd",n);
    // }
    int n,i;
    printf("Enter nth position: ");
    scanf("%d",&n);
    printf("Even numbers: ");
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d  ",i);
        }
    }
    printf("\nOdd numbers: ");
    for(i=1;i<=n;i++){
        if(i%2==1){
            printf("%d  ",i);
        }
    }
}