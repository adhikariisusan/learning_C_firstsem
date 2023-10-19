//wAP to check weather a number is prime or nnot
#include<stdio.h>
    int main (){
    int i,n,count=0;
    printf("Give your number:::");
    scanf("%d",&n);
        for(i=1;i<n;i++) {
        if (n%i==0){
        count++; }
        }
        if(count==1){
        printf("The number is prime::");
        }
        else {
        printf("The number is not prime");
        }
    return 0;
    }
