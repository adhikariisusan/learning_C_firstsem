//WAP to find reverse of the given number
#include<stdio.h>
int main() {
    int n,r,Sum=0;
    printf("Enter the number:::");
    scanf("%d",&n);
    do{
    r=n%10;
    Sum=Sum*10+r;
    n=n/10;
    } while(n>0);
    printf("\nReverse is::%d",Sum);
return 0;
}
