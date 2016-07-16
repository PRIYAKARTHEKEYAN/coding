#include<stdio.h>
int main()
{
char c;
int lc,uc;
scanf("%c",&c);
lc=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uc=(c=='A'||c=='E'||c=='O'||c=='I'||c=='U');
if(lc||uc)
printf("%c is a vowel",c);
else
printf("%c is a consonant",c);
return 0;
}
