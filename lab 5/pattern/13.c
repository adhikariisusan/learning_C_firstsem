/*
   *
  * *
 * * *
 * * * *
 * *** *
*/
#include<stdio.h>

void main()
{

int i,j,n;
printf("Enter the no of lines of * to be printed\n");
n=8;

for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
printf("* ");
}
for(j=1;j<=i;j++)
{
printf(" %d *",i);
}
for(j=i;j<=n;j++)
{
printf(" *");
}
printf("\n");
if(i==5)
    goto endi;
}
 endi;
 }
