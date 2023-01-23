#include <stdio.h>
int main()
{
int num,rem,sum=0,rev=0;
printf("enter the num");
scanf("%d",&num);
while (num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
if (num==rev)
printf("the num is palindrome");
else
printf("the num is not a palindrome");
return 0;
}
