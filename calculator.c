#include<stdio.h>
void add(){
    int a,b,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    r=a+b;
    printf("Addition of this two nunber is: %d",r);

}
void sub(){
    int a,b,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    r=a-b;
    printf("Substraction of this two nunber is: %d",r);

}
void mul(){
    int a,b,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    r=a*b;
    printf("Multiplication of this two nunber is: %d",r);

}
void div(){
    int a,b;
    float r;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    r=a/b;
    printf("Division of this two nunber is: %f",r);

}
void rem(){
    int a,b,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    r=a%b;
    printf("Reminder of this two nunber is: %d",r);

}
void main(){
    int ch;
    do{
    printf("\n-----Calculator----");
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Reminder");
    printf("\n6. Exit");
    printf("\nEnter your Choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
                add();
                break;
        case 2: 
                sub();
                break;
        case 3:
                mul();
                break;
        case 4:
                div();
                break;
        case 5: 
                rem();
                break;
        case 6: 
        printf("Thank you ");
        break;
        default: 
        printf("Invalid Input");
        break;
    }
    }while(ch!=6);
}