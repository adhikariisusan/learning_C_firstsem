// WAP to write a program using geometric progression a=8, cr=2 upto n terms and sum
#include<stdio.h>
#include<math.h>
    int main () {
    int n,last,i,sum=0;
    printf("Enter N:::");
    scanf("%d",&n);
    last=8*(pow(2,(n-1))); // last=a*(r^n-1)
    for(i=8;i<=last;i*=2) {
    printf("\n%d",i);
    sum+=i;
    }
    printf("\nSUM IS:::%d",sum);
    return 0;
    }
