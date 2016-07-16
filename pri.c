#include<stdio.h>
int main()
{
int n1,n2,i,flag;
scanf("%d %d",&n1,&n2);
while(n1<n2)
{
flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
flag=1;break;
}
}
if(flag==0)
printf("%d",n1);
++n1;
return 0;
}
