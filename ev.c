#include<stdio.h>
int main()
{
int min,max,n;
scanf(%d %d",&min,&max);
for(n=min;n<=max;n++)
{
if(n%2!=0)
printf("%d",n);
printf("even numbers are:\n");
for(n=min;n<=max;n++)
if(n%2==0)
printf("%d",n);
return 0;
}
