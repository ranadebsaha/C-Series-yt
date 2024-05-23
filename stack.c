#include<stdio.h>
int stack[5],top=-1,max=5;
void push(){
    if(top==max-1){
        printf("Stack is Overflow");
        return;
    }else{
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        printf("Push Completed");
    }
}
void pop(){
    if(top==-1){
        printf("Stack is Empty");
        return;
    }else{
        printf("Poped item is: %d",stack[top]);
        top--;
    }
}
void display(){
    int i;
    printf("Stack is: ");
    for(i=0;i<=top;i++){
        printf("%d  ",stack[i]);
    }
}
void main(){
    int ch;
    do{
        printf("\n----Stack----");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: printf("Thank you");
            break;
            default: printf("Invalid choice\n");
            break;
        }
    }while(ch!=4);
}