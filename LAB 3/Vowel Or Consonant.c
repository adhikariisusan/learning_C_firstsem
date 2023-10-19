// WAP to check weather the inputted chracter is vowel or consonant ASCI 65-90,95-122
#include<stdio.h>

    int main () {
    char a;
    printf("Enter your character::\n");
    scanf("%c",&a);

    if (a=='A'||a=='e'||a=='i'||a=='o'||a=='u'||a=='a'||a=='E'||a=='I'||a=='U'||a=='U')
        {
        printf("\nThe Inputted number is a vowel");
    }
    else if((65<=a<=90)||(95<=a<=122))
    {
        printf("\nThe Inputted number is not a vowel");
    }
    else
    {
        printf("\n Invalid Input");
    }
    return 0;
    }
