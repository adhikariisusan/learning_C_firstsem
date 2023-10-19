//WAP for Lower traingular and upper traingular matrix
#include<stdio.h>
 int main()
    {
        int a[100][100],flag=0;
        printf("Enter the number of 1 rows:\n");
        int m;
        scanf("%d",&m);
        printf("\nEnter the number of 1 columns:\n");
        int n;
        scanf("%d",&n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("\na[%d][%d]\n",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>j)
                {
                    if(a[i][j]!=0)
                        flag=1;
                }

                }
            }
            printf("\nYour Inputted Matrix is :\n");
            for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }

            if(flag==1)
                printf("The matrix is not upper triangular matrix");
            else
                printf("The matrix is upper traingular matrix");



        return 0;
        }
