//WAP to input two strings and concatinate them
#include<stdio.h>
#include<string.h>
    int main()
    {
        char a[50],b[50];
        gets(a);
        gets(b);
        strcat(a,b);
        puts(a);
    return 0;
    }
