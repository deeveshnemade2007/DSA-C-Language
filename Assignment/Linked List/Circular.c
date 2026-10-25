#include <stdio.h>
#define SIZE 5
int cq[SIZE], front = -1, rear = -1;
int dq[SIZE], df = -1, dr = -1;
void enqueue(){
    int value;
    if ((rear + 1) % SIZE == front){
        printf("Circular Queue is Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &value);
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = value;
    printf("Value inserted\n");
}
void dequeue(){
    if (front == -1){
        printf("Circular Queue is Empty\n");
        return;
    }
    printf("%d deleted\n", cq[front]);
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}
void displayCQ(){
    int i;
    if (front == -1){
        printf("Circular Queue is Empty\n");
        return;
    }
    printf("Circular Queue: ");
    i = front;
    while (1){
        printf("%d ", cq[i]);
        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }
    printf("\n");
}
void insertFront(){
    int value;
    if ((df == 0 && dr == SIZE - 1) || df == dr + 1){
        printf("Deque is Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &value);
    if (df == -1)
        df = dr = 0;
    else if (df == 0)
        df = SIZE - 1;
    else
        df--;
    dq[df] = value;
}
void insertRear(){
    int value;
    if ((df == 0 && dr == SIZE - 1) || df == dr + 1){
        printf("Deque is Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &value);
    if (df == -1)
        df = dr = 0;
    else if (dr == SIZE - 1)
        dr = 0;
    else
        dr++;
    dq[dr] = value;
}
void deleteFront(){
    if (df == -1){
        printf("Deque is Empty\n");
        return;
    }
    printf("%d deleted from front\n", dq[df]);
    if (df == dr)
        df = dr = -1;
    else
        df = (df + 1) % SIZE;
}
void deleteRear(){
    if (df == -1)
    {
        printf("Deque is Empty\n");
        return;
    }
    printf("%d deleted from rear\n", dq[dr]);
    if (df == dr)
        df = dr = -1;
    else if (dr == 0)
        dr = SIZE - 1;
    else
        dr--;
}
void displayDQ()
{
    int i;
    if (df == -1){
        printf("Deque is Empty\n");
        return;
    }
    printf("Deque: ");
    i = df;
    while (1){
        printf("%d ", dq[i]);
        if (i == dr)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}
int main(){
    int choice;
    while (1)
    {
        printf("\n CIRCULAR \n");
        printf("1. Enqueue  2. Dequeue  3. Display  4. Insert Front  5. Insert Rear  6. Delete Front  7. Delete Rear  8. Display Dequeue  9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayCQ();
                break;
            case 4:
                insertFront();
                break;
            case 5:
                insertRear();
                break;
            case 6:
                deleteFront();
                break;
            case 7:
                deleteRear();
                break;
            case 8:
                displayDQ();
                break;
            case 9:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}