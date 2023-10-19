//WAP to create fibonacci series
#include<stdio.h>
    int main() {
    int num1=0,num2=1,n,i;
    printf("Enter the value of n");
    scanf("%d",&n);
    int nextterm=num1+num2;
    printf(" THE FIBBONACCI SERIES ::: %d\n%d",num1,num2);
        for (i=3;i<=n;i++){
        printf("%d\n",nextterm);
        num1=num2;
        num2=nextterm;
        nextterm=num1+num2;
        }
        return 0;
    }
