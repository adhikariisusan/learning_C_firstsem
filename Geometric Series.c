// WAP for Geometric Series with a=2,cr=3, upto 10th term
#include<stdio.h>
int main() {
int a=2,cr=3,v=a,i,sum;
printf(" Geometric Series \n");
    for(i=0;i<10;i++) {
    printf("\t %d \n",v);
    sum +=v;
    v *=cr;
    }
    printf("\n Sum is = %d",sum);
return 0;
}
