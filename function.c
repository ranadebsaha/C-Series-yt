// What is Function in C.
// Types Of Function.
// Function Structure
// Function Call
// Argument vs Parameter
// Prototype Declaration
// etc.
#include<stdio.h>
int rds(int*,int*);
void main(){   
int a=10,b=20;
printf("%d",rds(&a,&b));
}
int rds(int *x,int *y){
// printf("%d",a+b);
return *x+*y;
}

