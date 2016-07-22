#include<stdio.h>
#include<string.h>
int main()
{
char str[20],temp;
int i,j;
printf("Enter the string");
scanf("%s",str);
for(i=0;i<strlen(str);i=i+2)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
printf("swapped string is %s",str);
return 0;
}
