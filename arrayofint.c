#include<stdio.h>
int main()
{
int a[5]={10,12,11,23,5};
int i,max=a[0],min=a[0],sum=0,avg=0;
for(i=1;i<5;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
for(i=1;i<5;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
avg=(sum/5);
printf("max is%d",max);
printf("min is%d",min);
printf("sum is%d",sum);
printf("avg is%d",avg);
return 0;
}
