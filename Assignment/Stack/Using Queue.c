#include <stdio.h> 
int q1[100], q2[100]; 
int front1 = 0, rear1 = -1; 
int front2 = 0, rear2 = -1; 
int size; 
void push() 
{ 
    int value; 
    if (rear1 - front1 + 1 == size) 
    { 
        printf("Stack Overflow!\n"); 
        return; 
    } 
    printf("Enter value: "); 
    scanf("%d", &value); 
    rear1++; 
    q1[rear1] = value; 
    printf("Element inserted.\n"); 
} 
void pop() 
{ 
    int value; 
    if (rear1 < front1) 
    { 
        printf("Stack Underflow!\n"); 
        return; 
    } 
    while (front1 < rear1) 
    { 
        rear2++; 
        q2[rear2] = q1[front1]; 
        front1++; 
    } 
    value = q1[front1]; 
    printf("Deleted element = %d\n", value); 
    front1 = 0; 
    rear1 = -1; 
    while (front2 <= rear2) 
    { 
        rear1++; 
        q1[rear1] = q2[front2]; 
        front2++; 
    } 
    front2 = 0; 
    rear2 = -1; 
} 
void display() 
{ 
    int i; 
    if (rear1 < front1) 
    { 
        printf("Stack is empty!\n"); 
        return; 
    } 
    printf("Stack: "); 
 
    for (i = rear1; i >= front1; i--) 
    { 
        printf("%d ", q1[i]); 
    } 
    printf("\n"); 
} 
int main() 
{ 
    int choice; 
    printf("Enter stack size: "); 
    scanf("%d", &size); 
    if (size <= 0 || size > 100) 
    { 
        printf("Invalid size!\n"); 
        return 0; 
    } 
    while (1) 
    { 
        printf("\nSTACK USING QUEUE\n"); 
        printf("1. Insert   2. Delete   3. Display   4. Exit\n"); 
 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) 
        { 
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
                printf("Program terminated.\n"); 
                return 0; 
            default: 
                printf("Invalid choice!\n"); 
        } 
    }
    }