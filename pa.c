#include<stdio.h>
int main()
{
int n,d=0,r,o;
scanf("%d",&n);
o=n;
while(n!=0)
{
r=n%10;
d=d*10+r;
n/=10;
}
if(o==d)
printf("palindrome",o);
else
printf("not a palindrome",o);
return 0;
}
