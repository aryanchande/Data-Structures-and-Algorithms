#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

/* Create Doubly Linked List */
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
        newnode->prev = NULL;
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
            newnode->prev = temp;
        }
    }
}

/* Insert at Beginning */
void insertAtBeginning(int value)
{
    struct node *newnode =
        (struct node *)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;

    if(head != NULL)
    {
        head->prev = newnode;
    }

    head = newnode;
}

/* Delete Node by Value */
void deleteNode(int key)
{
    struct node *temp = head;

    while(temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Value not found.\n");
        return;
    }

    if(temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    else
    {
        head = temp->next;
    }

    if(temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    free(temp);

    printf("Node deleted successfully.\n");
}

/* Display List */
void display()
{
    struct node *temp = head;

    if(head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("NULL <- ");

    while(temp != NULL)
    {
        printf("%d", temp->data);

        if(temp->next != NULL)
        {
            printf(" <-> ");
        }

        temp = temp->next;
    }

    printf(" -> NULL\n");
}

int main()
{
    int choice, value;

    do
    {
        printf("\n===== DOUBLY LINKED LIST =====\n");
        printf("1. Create List\n");
        printf("2. Display List\n");
        printf("3. Insert at Beginning\n");
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
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;

            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}
