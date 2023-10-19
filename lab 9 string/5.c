//WAP to check weather the string is palindrome or not
#include<stdio.h>
#include<string.h>
    int main()
    {
    char a[50],b[50];
    int j=0,flag=0;
    gets(b);
    strcpy(a,b);
    strrev(a);
    if(strcmp(a,b)==0)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");
    }
