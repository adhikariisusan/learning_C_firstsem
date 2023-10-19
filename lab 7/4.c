//WAP to add two matrix asked from user
#include<stdio.h>
    int main()
    {
        int ar[100][100],br[100][100];
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
                printf("\n firstarray[%d][%d]",i+1,j+1);
                scanf("%d",&ar[i][j]);
            }
        }
        printf("\nenter elements:\n\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("\n secondarray[%d][%d]",i+1,j+1);
                scanf("%d",&br[i][j]);
            }
        }
        printf("\n first  Matrix \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",ar[i][j]);

            }
            printf("\n");
        }

        printf("\n second Matrix \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",br[i][j]);

            }
            printf("\n");
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               ar[i][j]+=br[i][j];
            }
        }
        printf("\n Sum  Matrix \n");
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
