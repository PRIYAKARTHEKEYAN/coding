#include<stdio.h>
int main()
{
int a,b,x,y,t,g;
scanf("%d %d",&x,&y);
a=x;
b=y;
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
g=a;
printf("gcd of %d and %d is %d",x,y,g);
return 0;
}
