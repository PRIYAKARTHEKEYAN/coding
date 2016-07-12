#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x>y&&x>z)
{
printf("x is largest");
}
if(y>x&&y>z)
{
printf("y is largest");
}
if(z>x&&z>y)
{
printf("z is largest");
}
return 0;
}
