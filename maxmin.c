#include <stdio.h>
int main()
{
int a,b,c;
printf("enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
printf("\n largest value is");
{
if (a>b&a>c)
printf("%d is largest",a);
}
{
if (b>c&b>a)
printf("%d is largest",b);
}
{
if (c>b&c>a)
printf("%d is largest",c);
}
printf("\n smallest value is");
if (a<b&a<c)
{
printf("%d is smallest",a);
}
{
if (b<c&b<a)
printf("%d is smallest",b);
}
{
if (c<b&c<a)
printf("%d is smallest is",c);
}
return 0;
}
