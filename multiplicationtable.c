#include <stdio.h>
int main()
{
int num,num1,product;
printf("enter num");
scanf("%d",&num);
num1=1;
while(num1<=10)
{
product=num*num;
printf("%d*%d=%d",num,num1,product);
num1=num1+1;
}
return 0;
}
