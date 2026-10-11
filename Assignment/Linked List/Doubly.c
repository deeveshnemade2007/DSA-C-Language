#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
void insert() 
{
    struct Node *p;
    int value;
    p = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &value);
    p->data = value;
    p->prev = NULL;
    p->next = head;
    if (head != NULL)
        head->prev = p;
    head = p;
}
void deleteNode() 
{
    struct Node *p;
    int value;
    printf("Enter value to delete: ");
    scanf("%d", &value);
    p = head;
    while (p != NULL && p->data != value)
        p = p->next;
    if (p == NULL) 
    {
        printf("Value not found\n");
        return;
    }
    if (p->prev != NULL)
        p->prev->next = p->next;
    else
        head = p->next;
    if (p->next != NULL)
        p->next->prev = p->prev;
    free(p);
    printf("Node deleted\n");
}
void search() 
{
    struct Node *p = head;
    int value, position = 1;
    printf("Enter value to search: ");
    scanf("%d", &value);
    while (p != NULL) 
    {
        if (p->data == value) 
        {
            printf("Value found at position %d\n", position);
            return;
        }
        p = p->next;
        position++;
    }
    printf("Value not found\n");
}
void forward() 
{
    struct Node *p = head;
    printf("Forward: ");
    while (p != NULL) 
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void backward() 
{
    struct Node *p = head;
    if (p == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    while (p->next != NULL)
        p = p->next;
    printf("Backward: ");
    while (p != NULL) 
    {
        printf("%d ", p->data);
        p = p->prev;
    }
    printf("\n");
}
int main() 
{
    int choice;
    do {
        printf("\n--- DOUBLY LINKED LIST ---\n");
        printf("1. Insertion  2. Deletion  3. Searching  4. Forward Traversal  5. Backward Traversal  6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                insert();
                break;
            case 2:
                deleteNode();
                break;
            case 3:
                search();
                break;
            case 4:
                forward();
                break;
            case 5:
                backward();
                break;
            case 6:
                printf("Program ended\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } 
    while (choice != 6);
    return 0;
}