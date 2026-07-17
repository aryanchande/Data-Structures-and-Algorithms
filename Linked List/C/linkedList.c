#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Create Linked List */
void create()
{
    int n, i, value;
    struct node *newnode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }
}

/* Display Linked List */
void display()
{
    struct node *temp = head;

    if(head == NULL)
    {
        printf("\nLinked List is Empty.\n");
        return;
    }

    printf("\nLinked List: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

/* Reverse Linked List */
void reverse()
{
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    printf("\nLinked List Reversed Successfully.\n");
}

/* Delete Node by Value */
void deleteNode(int key)
{
    struct node *temp = head;
    struct node *prev = NULL;

    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("\nValue not found.\n");
        return;
    }

    if(prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    free(temp);

    printf("\nNode Deleted Successfully.\n");
}

/* Main Function */
int main()
{
    int choice, value;

    do
    {
        printf("\n===== LINKED LIST MENU =====\n");
        printf("1. Create Linked List\n");
        printf("2. Display Linked List\n");
        printf("3. Reverse Linked List\n");
        printf("4. Delete Node\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                reverse();
                break;

            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;

            case 5:
                printf("\nExiting Program...\n");
                break;

            default:
                printf("\nInvalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}
