//WAP  to initialize an array of size mxn. Find and display it in matrix
#include<stdio.h>
    int main()
    {
        int ar[100][100];
        printf("Enter the number of rows:\n");
        int m;
        scanf("%d",&m);
        printf("\nEnter the number of columns:\n");
        int n;
        scanf("%d",&n);
        printf("enter elements:\n\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("\n array[%d][%d]",i+1,j+1);
                scanf("%d",&ar[i][j]);
            }
        }
        printf("\n In Matrix \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",ar[i][j]);

            }
            printf("\n");
        }
    return 0;
    }
