//WAP to search the elements from the array
#include <stdio.h>

int main() {
    int ar[50];
    printf("Size\n");
    int n;
    scanf("%d",&n);
    printf("Elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Searching Element:\n");
    int sr,flag=0,a=0;
    scanf("%d",&sr);
    for(int j=1;j<=n;j++)
    {
        if(sr==ar[j-1])
        {
             flag=1;
             a=j;
        }

    }
    if(flag==1)
        printf("\nThe element %d is found and a at index %d",ar[a],a);
    else
        printf("\nThe element is not found");
    return 0;
}
