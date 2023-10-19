//Factorial of a given number
#include<stdio.h>
    int main() {
    int n,i,a=1;
    printf("Enter Your Number:::");
    scanf("%d",&n);
    if(n<=0) {
    printf("\n Invalid input, Given number is negative");
    }
    else if(n>0) {
    for(i=1;i<=n;i++){
    a*=i;
    }
    printf("\n Factorial is ::: %d",a);
    }
    else {
    printf("Enter a Valid input");
    }
    return 0;
    }
