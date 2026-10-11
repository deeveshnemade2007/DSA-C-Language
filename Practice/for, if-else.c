#include <stdio.h>
int main()
{
int n, i, average, sum=0;
printf("Enter the number of subjects: ");
scanf("%d", &n);
int list[n]; 
printf("Enter %d subjects marks:\n", n);
for(i = 0; i < n; i++)
{
scanf("%d", &list[i]); 
}
for(i=0; i<n; i++)
{
     sum=sum+list[i];
}
average=sum/n;
printf("Average: %d \n", average);
if(average>=80)
{
     printf("Grade A:");
}
else if(average>=60)
{
     printf("Grade B:");
}
else if(average>=40)
{
     printf("Grade C:");
}
else{
     printf("FAIL");
}
return 0;
}