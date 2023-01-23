#include <stdio.h>
int main()
{
int perc;
printf("enter the perc");
scanf("%d",&perc);
if (perc >=70)
printf("distinction");
else if (perc>=60 && perc <70)
printf("first class");
else if (perc>=50 && perc <60)
printf("second class");
else if (perc>=1 && perc <50)
printf("fail");
else
printf("enter perc between 1 and 100");
printf("perc obtained is %d", perc);
return 0;
}
