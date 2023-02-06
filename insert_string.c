#include <stdio.h>
#include <string.h>
int main()
{
char str1[20],str2[20];
int l1,l2,n,i;
printf("enter the string 1\n");
scanf("%s",str1);
l1=strlen(str1);
printf("enter the string 2\n");
scanf("%s",str2);
l2=strlen(str2);
printf("enter the position where the string is to be inserted");
scanf("%d",&n);
for (i=n;i<11;i++)
{
str1[i+12]=str1[i];
}
for(i=0;i<12;i++)
{
str1[n+i]=str2[i];
}
str2[12+1]='\0';
printf(" after inserting the string is %s",str1);
return 0;
}
