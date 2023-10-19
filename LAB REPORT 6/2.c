//WAP to copy from one array and another array
#include<stdio.h>
    int main() {
        int a[50],b[50],c;
        printf("Enter the range of your array \n");
        scanf("%d",&c);
        printf("Enter your array\n");
        for(int i=0;i<c;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0;j<c;j++)
        {
            b[j]=a[j];
        }
        printf("\n This is the output of the second array");
        {
            for(int k=0;k<c;k++)
            {
                printf("%d ",b[k]);
            }
        }
    return 0;
    }
