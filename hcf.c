#include<stdio.h>
int main()
{
int n1,n2,i,m,hcf=1;
scanf("%d %d",&n1,&n2);
m=(n1<n2)?n1:n2;
for(i=1;i<=m;i++)
{
if(n1%i==0&&n2%i==0)
{
hcf=i;
}
}
printf("hcf of %d is %d = %d\n",n1,n2);
return 0;
}
