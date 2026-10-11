#include <stdio.h>
int main()
{
int n, i, average, sum = 0;
printf("Enter the number of elements: ");
scanf("%d", &n);
int list[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
{
     scanf("%d", &list[i]);
}
for (i = 0; i < n; i++)
{
     sum = sum + list[i];
}
average = sum / n;
printf("Average of elements: %d", average);
return 0;
}