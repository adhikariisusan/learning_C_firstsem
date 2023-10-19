//WAP to enter floating point numbers, store them in an array and display it in the given and reverse order
#include <stdio.h>
    int main() {
        float num[50];
        printf("Size Of Array:\n");
        int n;
        scanf("%d",&n);
        printf("\nThe Elements:\n");
        for(int i=0;i<n;i++)
        {
            scanf("%f",&num[i]);
        }
        printf("The given numbers in regular order\n");
        for(int j=0;j<n;j++)
        {
            printf("%f\n",num[j]);
        }
        printf("The given numbers in reverse order is:\n");
        for(int k=(n-1);k>=0;k--)
        {
            printf("%f\n",num[k]);
        }
        return 0;

    }
