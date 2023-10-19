//WAP to multippl two matrix mxn and pxq from the user
#include<stdio.h>
        int main()
    {
        int a1[100][100],a2[100][100],a3[100][100];
        printf("Enter the number of 1 rows:\n");
        int m;
        scanf("%d",&m);
        printf("\nEnter the number of 1 columns:\n");
        int n;
        scanf("%d",&n);
        printf("Enter the number of 2 rows:\n");
        int o;
        scanf("%d",&o);
        printf("\nEnter the number of 2 columns:\n");
        int p;
        scanf("%d",&p);
        printf("enter elements:\n\n");
        if(n==o)
        {

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("\n array[%d][%d]",i+1,j+1);
                scanf("%d",&a1[i][j]);
            }
        }
//
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<100;j++)
            {
                a3[i][j]=0;
            }
        }

        for(int i=0;i<o;i++)
        {
            for(int j=0;j<p;j++)
            {
                printf("\n array[%d][%d]",i+1,j+1);
                scanf("%d",&a2[i][j]);
            }
        }
        printf("\n first  Matrix \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",a1[i][j]);

            }
            printf("\n");
        }

        printf("\n second Matrix \n");
        for(int i=0;i<o;i++)
        {
            for(int j=0;j<p;j++)
            {
                printf("%d\t",a2[i][j]);

            }
            printf("\n");
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            {
                for(int k=0;k<o;k++){
              a3[i][j]+=a1[i][k]*a2[k][i];
                }

            }
        }
        printf("\n New Matrix:\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            {
                printf("%d\t",a3[i][j]);

            }
            printf("\n");
        }

    }
    return 0;
    }
