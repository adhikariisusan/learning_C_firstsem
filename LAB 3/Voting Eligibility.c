//WAp to check weater a person is eligible to vote or note using conditional operator
#include<stdio.h>
    int main() {
    printf("Enter Your Age ");
    int a;
    scanf("%d",&a);
    if(a<18) {
        printf("You are ineligible to vote");
        }
        else {
        printf("You are eligible to vote");
        }
    return 0;
    }
