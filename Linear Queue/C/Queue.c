/*Queue follows FIFO(First In First Out).We are using array to implement Queue.It uses two pointers :-
1) Front-for deletion
2)Rear-for insertion
Algorithm:-
1)Initialize front=rear=-1
2)Enqueue:check overflow(Queue is already full) ,insert at rear.
3)Dequeue:check underflow(Queue is empty),remove from front.

*/
#include<stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
void enqueue(){
    int item;
    if(rear==MAX-1){
        printf("Overflow!\n");
    }else{
        if(front==-1) front=0;
        scanf("%d",&item);
        queue[++rear]=item;
    }
}
void dequeue(){
    if(front==-1 || front>rear){
        printf("Underflow!\n");
    }else{
        printf("Deleted : %d\n",queue[front++]);
    }
}
void display(){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}

int main() {
    int n;
    do {
        printf("\n--- Queue Operations Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        
        // Safety check to handle non-integer menu inputs
        if (scanf("%d", &n) != 1) {
            printf("Invalid input! Exiting program.\n");
            break;
        }

        switch (n) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please select 1-4.\n");
        }
    } while (n != 4);

    return 0;
}