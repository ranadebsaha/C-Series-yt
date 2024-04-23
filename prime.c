#include<stdio.h>
void main(){
    // int a,i,sum=0;
    // printf("Enter a number: ");
    // scanf("%d",&a);
    // for(i=2;i<a;i++){
    //     if(a%i==0){
    //         sum=1;
    //         printf("This number is not a prime number");
    //         break;
    //     }
    // }
    // if(sum==0){
    //     printf("This number is prime");
    // }
    int n,i,j,sum;
    printf("Enter nth position: ");
    scanf("%d",&n);
    printf("Prime numbers are: ");
    for(i=2;i<=n;i++){
        sum=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                sum++;
            }
        }
    if(sum==2){
        printf("%d  ",i);
    }
    }
}