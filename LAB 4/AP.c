//WAP to display arithmetic sum with first term a=8, cd=3 upto n terms
#include<stdio.h>
int main() {
    int n,i,sum=0;
    printf(" Provide N:::");
    scanf("%d",&n);
    int last=8+(n-1)*3;
    for(i=1;i<=last;i+=3) {
    printf("%d\n",i);
    sum +=i;
    }
    printf("\n THE SUM IS::: %d",sum);
return 0;
}
