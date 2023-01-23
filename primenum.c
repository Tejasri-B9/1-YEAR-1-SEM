#include <stdio.h>
int main()
{
int num=12,flag=0,i;
for (i=2;i<num/2;i++)
if (num%i==0)
flag++;
if (flag==0)
printf("the num is prime");
else
printf("the num is not prime");
return 0;
}
