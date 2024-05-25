#include<stdio.h>
int queue[5],front=-1,rear=-1,max=5;
void insert(){
if(rear==max-1){
    printf("Queue is Overflow");
}
else{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(front==-1){
        front=rear=0;
        queue[rear]=n;
    }
    else{
       rear++;
       queue[rear]=n; 
    }
printf("Value Inserted");
}
}
void delete(){
    int temp;
    if(front==-1){
        printf("Queue is Empty");
    }else{
        if(front==rear){
            temp=queue[front];
            front=rear=-1;
        }
        else{
            temp=queue[front];
            front++;
        }
    printf("%d is Deleted",temp);
    }

}
void display(){
    int i;
    if(front==-1){
        printf("Queue is Empty");
        return;
    }
    printf("Queue is: ");
    for(i=front;i<=rear;i++){
        printf("%d  ",queue[i]);
    }
}
void main(){
    int ch;
    do{
        printf("\n----Queue----");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert();
            break;
            case 2: delete();
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