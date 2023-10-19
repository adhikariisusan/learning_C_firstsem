#include<stdio.h>
    int main() {
    int a,b;
    printf("Enter two integers to swap them: \n");
    scanf("\n %d \n %d",&a,&b);
    printf("\n First Character is %d and Second Character is %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" \n After Swap \n First Character is %d and Second Character is %d",a,b);

    return 0;
    }
