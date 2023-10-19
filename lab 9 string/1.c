//WAP to find the length of a string without using string function
#include<stdio.h>
    int main()
    {
        char a[50];
        int j=0;
        scanf("%[^\n]",&a);
        while(a[j]!='\0')
        {
            j++;
        }

    printf("\n length:%d",j);

    return 0;
    }
