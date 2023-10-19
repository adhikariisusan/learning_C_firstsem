/*
A
BB
CCC
DDDD
EEEEE
*/
#include <stdio.h>
main(){
for (int i = 'A';i<='E';i++)
{

for (int j = 'A';j<=i ;j++)
{
printf ("%c\t",i);
}
printf ("\n");
}
}
