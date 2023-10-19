#include<stdio.h>
    int main()
    {
    printf("Enter the size of an array\n");
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    printf("\nEnter your arrray");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        sum+=a[j];
    }
    int avg=(sum/n);
    printf("\nSum=%d\nAvg=%d",sum,avg);
    return 0;
    }
