#include<stdio.h>
int main()
{
int f=0,s=1,t,n;
scanf("%d",&n);
printf("%d %d",f,s);
t=f+s;
for(i=2;i<=n;i++)
{
printf("%d",t);
f=s;
s=t;
}
return 0;
}
