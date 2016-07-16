#include<stdio.h>
int main()
{
int base,exp;
long long r=1;
scanf("%d",&base);
scanf("%d",&exp);
while(exp!=0)
{
r*=base;
--exp;
}
printf("%lld",r);
return 0;
}
