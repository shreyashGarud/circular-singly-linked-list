#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode, *temp;
    int n, i;
    int largest, smallest;

    head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Data element: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    
    temp->next = head;

    
    printf("\nCIRCULAR LINKED LIST:\n");
    temp = head;

    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    while(temp != head);

    printf("Back to head\n");

    
    largest = head->data;
    smallest = head->data;

    temp = head;

    do
    {
        if(temp->data > largest)
        {
            largest = temp->data;
        }

        if(temp->data < smallest)
        {
            smallest = temp->data;
        }

        temp = temp->next;
    }
    while(temp != head);

    printf("\nLargest number = %d", largest);
    printf("\nSmallest number = %d\n", smallest);

    return 0;
}

