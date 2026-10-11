#include <stdio.h>
int main()
{
    int stack[100];
    int size, top = -1;
    int choice, value, i;
    printf("Enter stack size: ");
    scanf("%d", &size);
    do
    {
        printf("\nSTACK MENU\n");
        printf("1. Insert   2. Delete   3. Display   4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(top == size - 1)
                {
                    printf("Stack Overflow!\n");
                }
                else
                {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    printf("%d inserted successfully.\n", value);
                }
                break;
            case 2:
                if(top == -1)
                {
                    printf("Stack Underflow!\n");
                }
                else
                {
                    printf("%d deleted successfully.\n", stack[top]);
                    top--;
                }
                break;
            case 3:
                if(top == -1)
                {
                    printf("Stack is empty.\n");
                }
                else
                {
                    printf("Stack elements are:\n");

                    for(i = top; i >= 0; i--)
                    {
                        printf("%d\n", stack[i]);
                    }
                }
                break;
            case 4:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 4);
    return 0;
}
