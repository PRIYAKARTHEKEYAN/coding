#include<stdio.h>
int main()
{
int a,b,x,y,t,g,l;
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
l=(x*y)/g;
printf("gcd of %d and %d is %d",x,y,g);
printf("lcm of %d and %d is %d",x,y,l);
return 0;
}
