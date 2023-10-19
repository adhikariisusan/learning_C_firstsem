//WAP to check weather the matrix are equal or not
#include<stdio.h>
    int main()
    {
        int ar[100][100],br[100][100];
        printf("Enter the number of rows:\n");
        int m,flag=0;
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
        printf("\n enter elements:\n\n");
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
               if (ar[i][j]!=br[i][j])
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("\n MATRIX IS EQUAL ");
        }
        else {
            printf("\n MATRIX IS UNEQUAL");
        }


    return 0;
    }
