#include<stdio.h>
int main()
{
char str[100],temp;
int i,j=0;
gets(str);
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("reverse string is %s",str);
return 0;
}
