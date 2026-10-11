#include <stdio.h>
int main()
{
int n, key, i, j, mid, k;
int found = 0;
printf("Enter number of elements: ");
scanf("%d", &n);
int array[n];
printf("Enter %d elements:\n", n);
for (k = 0; k < n; k++)
{
     scanf("%d", &array[k]);
}
printf("Enter key: ");
scanf("%d", &key);
i = 0;
j = n - 1;
while (i <= j)
{
    mid = (i + j) / 2;
    if (array[mid] == key)
    {
        printf("Location: %d\n", mid + 1);
        found = 1;
        break;
    }
    else if (key < array[mid])
    {
        j = mid - 1;
    }
    else
    {
        i = mid + 1;
    }
}

if (found == 0)
{
    printf("Key not found\n");
}
return 0;
}
