//WAP to check weather the number is palindrome or not
#include<stdio.h>
    int main() {
    int n,r,Sum=0;
    printf("Enter the number:::");
    scanf("%d",&n);
    int temp=n;
    do{
    r=n%10;
    Sum=Sum*10+r;
    n=n/10;
    } while(n>0);
    if(temp==Sum) {
    printf("The number is palindrome");
    }
    else {
    printf("The number is not palindrome");
    }
    return 0;
    }
