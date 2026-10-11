#include <stdio.h>
int main()
{
    int roll;
    char name[20], branch[20];
    printf("Enter Name: ");
    scanf("%19s", name);
    printf("Enter Roll No.: ");
    scanf("%d", &roll);
    printf("Enter Branch: ");
    scanf("%19s", branch);
    printf("\nStudent Details\n");
    printf("Name: %s\n", name);
    printf("Roll No.: %d\n", roll);
    printf("Branch: %s\n", branch);
    return 0;
}