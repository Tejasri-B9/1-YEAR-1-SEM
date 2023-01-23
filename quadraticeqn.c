#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
float d,r1,r2;
printf("enter a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
d=b*b-4*a*c;
if (d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("the roots are r1 and r2");
printf("the roots are real");
}
else if (d==0)
{
r1=-b/(2*a);
r2=-b/(2*a);
printf("the roots are r1 and r2");
printf("roots are equal");
}
else 
{
printf("the roots are imaginary");
}
return 0;
}
