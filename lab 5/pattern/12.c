/*
ABCDE
ABCD
ABC
AB
A
*/
#include<stdio.h>

main()
{
int i,j;


for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%c\t",(char)(j+64));
}

printf("\n");
}
}
