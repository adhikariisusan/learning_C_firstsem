//WAP to find the frequency of a character in string
#include<stdio.h>
#include<string.h>
    int main()
    {
    char a[50],b;
    gets(a);
    scanf("%c",&b);
    int j=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(toupper(a[i])==toupper(b))
            j++;
    }
    printf("%c in %s was repeated %d times ",b,a,j);

    return 0;
    }
