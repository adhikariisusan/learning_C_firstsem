//WAP to find the frequency of each elements in an array
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
    int printed[1000],freq[1000];
    for(int ii=0;ii<=1000;ii++)
    {
        freq[ii]=0;
        printed[ii]=0;

    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(ar[j]==ar[k])
            {
                freq[j]++;
            }
        }

    }
    for(int l=0;l<n;l++)
    {
        if(freq[l]==1)
        {
        printf("\n%d element was repeated %d times in the array",ar[l],freq[l]);

        }
        else if(freq[l]>1)
        {
            if(printed[ar[l]]==0)
            {
                printf("\n%d element was repeated %d times in the array",ar[l],freq[l]);
                printed[ar[l]]=1;
            }

        }
    }


    return 0;
}
