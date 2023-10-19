/* WAP to input basic employee salary and calculate its gross sakary according to the followong
    Salary <=10000 then HRA=20% and DA=80%
    Salary <=20000 then HRA=25% and DA=90%
    Salary >20000 then HRA=30% and DA=95% */

#include <stdio.h>
    int main () {
    printf("Enter your Salary \n");
    int a;
    float hra,da,gs;
    scanf("%d",&a);
    if(a<=10000) {
    hra=.2*a,da=.8*a;

    }
    else if(10000<a<=20000) {
    hra=.25*a,da=.9*a;

    } else if(a>20000) {
    hra=.3*a,da=.95*a;

    }
    gs=a+hra+da;
    printf("\nThe Gross Salary of the person is ::: %f",gs);
    return 0;
    }
