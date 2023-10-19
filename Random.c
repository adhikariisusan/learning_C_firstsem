#include<stdio.h>
    int main() {
        int a,b;
        printf("Enter any two variables \n");
        scanf("%d%d",&a,&b);
        printf("first variable=%d, second variable=%d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("after swap, first variable=%d,second variable=%d",a,b);

    return 0;
    }

