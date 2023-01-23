#include <stdio.h>
int main()
{
int a=0,b=1,num,i,c;
printf("enter limit");
scanf("%d",&num);
for (i=3;i<=num;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
