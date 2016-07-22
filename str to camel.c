#include<stdio.h>
int main()
{
char str[100];
printf("input a string to convert");
gets(str);
printf("input string is %s %s",strupr(str),strlwr(str));
return 0;
}
