//WAP to find sum of diagonal and non diagonal
    int main()
    {
        int ar[100][100];
        printf("Enter the number of rows & columns:\n");
        int m;
        scanf("%d",&m);
        int sum1=0,sum2=0;
        printf("enter elements:\n\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("\n array[%d][%d]",i+1,j+1);
                scanf("%d",&ar[i][j]);
            }
        }
        printf("\n In Matrix \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("%d\t",ar[i][j]);
                if(i==j)
                    sum1+=ar[i][j];
                else
                    sum2+=ar[i][j];

            }
            printf("\n");
        }
        printf("\nSum of Diagonal Elements=%d\nSum of Diagonal Elements=%d",sum1,sum2);
    return 0;
    }
