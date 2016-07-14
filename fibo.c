#include<stdio.h>
int main()
{
int first=0,second=1,third,n;
scanf("%d",&n);
printf("%d %d",first,second);
third=first+second;
for(i=2;i<=n;i++)
{
printf("%d",third);
first=second;
second=third;
}
return 0;
}
