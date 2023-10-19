//WAP to copy without using string handling function
#include<stdio.h>
    int main()
    {
    char j[50],k[50];
    int i=0;
    scanf("%[^\n]",&j);
    while(j[i]!='\0')
        {
            k[i]=j[i];
            i++;
        }
    printf("%s",k);
    return 0;
    }
