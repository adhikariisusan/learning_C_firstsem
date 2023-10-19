//WAP to sort the n array elements provided in a one dimensional array
#include<stdio.h>
    int main()
    {
    int arr[50];
    printf("Enter the number of elements for your array:\n");
    int n,temp;
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }

    for(int i=0;i<n;i++)
    {
        for(int m=i+1;m<n;m++)
        {

        if(arr[i]>arr[m])
                    {
                        temp=arr[i];
                        arr[i]=arr[m];
                        arr[m]=temp;
                    }

    }}

    printf("The elements of the new sorted array:");
    for(int k=0;k<n;k++)
    {
        printf("\n%d",arr[k]);
    }
    return 0;
    }
