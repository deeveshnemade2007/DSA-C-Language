#include<stdio.h>
int main()
{
int n, i, key, found=0;
printf("Enter the number of elements: ");
scanf("%d", &n);
int array[n];
printf("Enter %d elements:\n", n);
for (i=0; i<n; i++) 
{
     scanf("%d", &array[i]);
}
printf("Enter key:");
scanf("%d", &key);
for(i=0; i<n; i++)
{
      if(array[i]==key)
     {
            found=1; 
            printf("Location=%d", i+1);
      }
}
if(found==0)
{
     printf("Key not found");
}
return 0;
}
