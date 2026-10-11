#include <stdio.h>
int main()
{
int a,b;
printf("Enter A: ");
scanf("%d", &a);
printf("Enter B: ");
scanf("%d", &b);
if(a>b)
{
    printf("Greater number is A");
}
else if(a<b)
{
    printf("Greater number is B");
}
else{
    printf("Numbers are Equal");
}
return 0;
}

