//WAP to count the no. of vowels or consonants in a string
#include<stdio.h>
#include<string.h>
    int main()
    {
    char a[50];
    gets(a);
    int c=0,space=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(97<=a[i]<=122||65<=a[i]<=90)
        {

        if(toupper(a[i])=='A'||toupper(a[i])=='E'||toupper(a[i])=='I'||toupper(a[i])=='O'||toupper(a[i])=='U')
            c++;

        }
        else if(a[i]==' ')
        space++;
    }
    printf("\nthere are %d vowels and %d consonants",c,strlen(a)-space-c);
    return 0;
    }
