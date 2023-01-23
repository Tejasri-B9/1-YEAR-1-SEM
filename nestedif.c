#include <stdio.h>
int main()
{
int number;
printf("enter the value of number");
scanf("%d",&number);
if(number>=0)
printf("the number is postive");
else
printf("the number is negative");
if(number%2==0)
printf("the number is even");
else
printf("the number is odd");
return 0;
}
