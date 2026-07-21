/*Circular queue connects end to begining by using modulo for efficient memory usage
Algorithm:-
1)Initialize front=rear=-1
2)Enqueue:(rear+1)% MAX==front ,this gives overflow.
3)Dequeue:adjusts front.
4)Traversal: loop using modulo
*/
#include<stdio.h>
#define MAX 5
int que[MAX],front=-1,rear=-1;
void enqueue(){
    int item;
    if((rear+1)%MAX==front){
        printf("Overflow!\n");
    }else{
        scanf("%d",&item);
        if(front==-1) front=rear=0;
        else rear=(rear+1)%MAX;
        que[rear]=item;

    }
}
void dequeue(){
    if(front==-1) printf("Underflow!\n");
    else{
        printf("Deleted : %d\n",que[front]);
        if(front==rear) front=rear=-1;
        else front=(front+1)%MAX;
    }
}
void display(){
    int i=front;
    while(1){
        printf("%d ",que[i]);
        if(i==rear) break;
        i=(i+1)%MAX;
    }
    printf("\n");
}

int main() {
    int choice;
    
    do {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid selection. Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        
        switch (choice) {
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
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please select between 1 and 4.\n");
        }
    } while (choice != 4);
    
    return 0;
}