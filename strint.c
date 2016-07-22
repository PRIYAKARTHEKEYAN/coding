#include<stdio.h>
#include<string.h>
int stringToInt(char[])
int main()
{
char str[10];
int intvalue;
scanf("%s",str);
intvalue=stringToInt(str);
printf("integer value:%d",intvalue);
return 0;
}
int stringToInt(char str[])
{
int i=0,sum=0;
while(str[i]!='\0')
{
if(str[i]<48||str[i]>57)
{
printf("unable to convert");
return 0;
}
else
{
sum=sum*10+(str[i]-48);
i++;
}
}
return sum;
}
