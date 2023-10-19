//WAP to take array and display the greatest and the smallest number
#include<stdio.h>

int main() {
    int ar[50],greatnum,smallnum;
    printf("Size:\n");
    int n;
    scanf("%d",&n);
    printf("Elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    smallnum=ar[0];
    for(int j=0;j<n;j++)
    {
        if(ar[j]>ar[j+1])
            greatnum=ar[j];
        if(smallnum>ar[j])
            smallnum=ar[j];
    }
    printf("\nGreatest Number: %d\nSmallest Number: %d",greatnum,smallnum);

    return 0;
}


