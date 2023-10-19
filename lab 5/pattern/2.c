/* WAP for

    *
   **
  ***

*/
#include<stdio.h>
    main() {
            int k;
         for(int j=1;j<=5;j++)
        {
            for(int k=j;k>=0;k--) {
                printf("\t");
            }
            for(int i=1;i<=j;i++)
            {
                printf("\t*");
            }
            printf("\n");
            }
    }
