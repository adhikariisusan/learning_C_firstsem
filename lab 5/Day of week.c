//WAP to show days of the week using a switch case
#include<stdio.h>
int main() {
int op;
printf("Enter The number\t");
scanf("%d",&op);
    switch (op) {
        case 1:
        printf("\nSunday");
        break;
        case 2:
        printf("\nMonday");
        break;
        case 3:
        printf("\nTeusday");
        break;
        case 4:
        printf("\nWednesday");
        break;
        case 5:
        printf("\nThursday");
        break;
        case 6:
        printf("\nFriday");
        break;
        case 7:
        printf("\nSaturday");
        break;
        default:
            printf("\nInvalid Input");
            break;
    }
    return 0;
    }
