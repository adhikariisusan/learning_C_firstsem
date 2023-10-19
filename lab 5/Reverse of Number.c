//WAP to find and display prime numbers between 50-100
#include<stdio.h>
    int main() {
    int count=0,n;
    printf("Enter A Number:::\n\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++) {
    if(n%i==0) {
    count++;
    }
    }
    if(count==1) {
    printf("The number is prime:");
    } else {
    printf("The number is composite:");
    }
    return 0;
    }
