#include<stdio.h>
#include<stdlib.h>
    int main( ) {
    int a=2,cd=3,i,v=a,sum;
    printf(" Arithmetic Series :: \n");
    for(i=0;i<=10;++i)
        {
            printf("\n%d",v);
            sum +=v;
            v+=cd;
        }
        printf(" \n SUM = %d",sum);
    return 0;
    }
