//Stack Implementation using array in c lang.
//Stack is a lineat data structure that follows the principle of LIFO(last In First Out).
#include<stdio.h>
#define MAX 5


int stack[MAX];
int top=-1 ;
void push(){
    int item;
    if(top==MAX-1){
        printf("Stack Overflow\n");         //adding element when the stack is already full;
    }
    else{
        printf("Enter the element to push :");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("Element inserted successfully\n");
        }
    }

void pop(){
    if(top==-1){
        printf("Stack Underflow\n");                  //trying to delete an element from the empty array
    }
    else{
        printf("Deleted element : %d",stack[top]);
        top--;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("Stack is empty.\n");
    }
    else{
        printf("Stack elements are : \n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
        }
}
int main(){
    int choice;
    do{
        printf("\n******** Stack MENU ********\n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
    while(choice!=4);
    return 0;
}

   
