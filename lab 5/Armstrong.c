//WAP to find and display armstrong number from 150 to 999
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, result = 0;

    printf("Armstrong numbers between 150 and 999 are:\n");

    for (num = 150; num <= 999; num++)
    {
        originalNum = num;

        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }

        if (result == num)
        {
            printf("%d\n", num);
        }

        result = 0;
    }

    return 0;
}
