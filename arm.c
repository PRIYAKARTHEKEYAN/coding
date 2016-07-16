#include<stdio.h>
int main()
{
int n,o,r,re,n1=0;
scanf("%d",&n);
o=n;
while(o!=0)
{
o/=10;
++n1;
}
o=n;
while(o!=0)
{
r=o%10;
re+=pow(r,n1);
o/=10;
}
if(re==n)
printf("armstrong");
else 
printf("Not");
return 0;
}
