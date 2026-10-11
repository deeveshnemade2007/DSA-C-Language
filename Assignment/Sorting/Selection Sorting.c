#include <stdio.h>
int main()
{
int array[50];
int i, j, k, n, min, temp;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements:\n");
for (k = 0; k < n; k++)
{
    scanf("%d", &array[k]);
}
for (i = 0; i < n - 1; i++)
{
    min = i;
    for (j = i + 1; j < n; j++)  
    {
        if (array[j] < array[min])
        {
            min = j;
        }
    }
    temp = array[i];
    array[i] = array[min];
    array[min] = temp;
}
printf("Sorted array: ");
for (i = 0; i < n; i++)
{
    printf("%d ", array[i]);
}
return 0;
}