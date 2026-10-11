#include <stdio.h> 
#include <stdlib.h> 
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
struct Node *head = NULL; 
void insertStart() 
{ 
    struct Node *p; 
    int value; 
    p = (struct Node *)malloc(sizeof(struct Node)); 
    printf("Enter value: "); 
    scanf("%d", &value); 
    p->data = value; 
    p->next = head; 
    head = p; 
    printf("Node inserted at start.\n"); 
} 
void insertEnd() 
{ 
    struct Node *p, *temp; 
    int value; 
    p = (struct Node *)malloc(sizeof(struct Node)); 
    printf("Enter value: "); 
    scanf("%d", &value); 
    p->data = value; 
    p->next = NULL; 
    if (head == NULL) 
    { 
        head = p; 
    } 
    else 
    { 
        temp = head; 
 
        while (temp->next != NULL) 
        { 
            temp = temp->next; 
        } 
        temp->next = p; 
    } 
    printf("Node inserted at end.\n"); 
} 
void insertBetween() 
{ 
    struct Node *p, *temp; 
    int value, pos, i; 
    printf("Enter position: "); 
    scanf("%d", &pos); 
    if (pos < 1) { 
        printf("Invalid position.\n"); 
        return; 
    } 
    p = (struct Node *)malloc(sizeof(struct Node)); 
    printf("Enter value: "); 
    scanf("%d", &value); 
    p->data = value; 
    if (pos == 1) { 
        p->next = head; 
        head = p; 
        printf("Node inserted.\n"); 
        return; 
    } 
    temp = head; 
    for (i = 1; i < pos - 1 && temp != NULL; i++) 
    { 
        temp = temp->next; 
    } 
    if (temp == NULL) 
    { 
        printf("Invalid position.\n"); 
        free(p); 
        return; 
    } 
    p->next = temp->next; 
    temp->next = p; 
    printf("Node inserted.\n"); 
} 
void deleteFirst() 
{ 
    struct Node *p; 
    if (head == NULL) 
    { 
        printf("List is empty.\n"); 
        return; 
    } 
    p = head; 
    head = head->next; 
    printf("Deleted value: %d\n", p->data); 
    free(p); 
} 
void deleteLast() 
{ 
    struct Node *p, *temp; 
    if (head == NULL) { 
        printf("List is empty.\n"); 
        return; 
    } 
    if (head->next == NULL) 
    { 
        printf("Deleted value: %d\n", head->data); 
        free(head); 
        head = NULL; 
        return; 
    } 
    temp = head; 
    while (temp->next->next != NULL) 
    { 
        temp = temp->next; 
    } 
    p = temp->next; 
    temp->next = NULL; 
    printf("Deleted value: %d\n", p->data); 
    free(p); 
} 
void display() { 
    struct Node *p; 
    if (head == NULL) 
    { 
        printf("List is empty.\n"); 
        return; 
    } 
    p = head; 
    printf("Linked List: "); 
    while (p != NULL) 
    { 
        printf("%d -> ", p->data); 
        p = p->next; 
    } 
    printf("NULL\n"); 
} 
int main() 
{ 
    int choice; 
    while (1) 
    { 
        printf("\nSINGLY LINKED LIST\n"); 
        printf("1. Insert at Start   2. Insert at End   3. Insert in Between\n"); 
        printf("4. Delete First Node   5. Delete Last Node   6. Display   7. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        switch (choice) { 
            case 1: 
                insertStart(); 
                break; 
            case 2: 
                insertEnd(); 
                break; 
            case 3: 
                insertBetween(); 
                break; 
            case 4: 
                deleteFirst(); 
                break; 
            case 5: 
                deleteLast(); 
                break; 
            case 6: 
                display(); 
                break; 
            case 7: 
                printf("Program terminated.\n"); 
                exit(0); 
            default: 
                printf("Invalid choice.\n"); 
        } 
    } 
    return 0; 
} 