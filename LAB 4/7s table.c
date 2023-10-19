//WAP to to inserts 7's table from 1 to n
#include<stdio.h>
    int main() {
    int i,n;
    printf("Enter n:::\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
    printf("\n7x%d=%d",i,i*7);
    }
    return 0;
    }
