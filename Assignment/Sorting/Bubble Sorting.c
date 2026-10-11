#include <stdio.h>
int main()
{
int array[50];
int n, i, j, k, temp;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements:\n");
for (k = 0; k < n; k++)
{
    scanf("%d", &array[k]);
}
for (i = 0; i < n - 1; i++){
    for (j = 0; j < n - i - 1; j++)
    {
        if (array[j] > array[j + 1])
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}
printf("Sorted array: ");
for (i = 0; i < n; i++)
{
    printf("%d ", array[i]);
}
 return 0;
}