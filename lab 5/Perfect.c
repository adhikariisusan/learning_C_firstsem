//WAP to display perfect number from 1 to 150
#include<stdio.h>
    int main() {
    int a,b,factsum=0;
    for(a=1;a<=150;a++)
    {
        factsum = 0;
    for(b=1;b<a;b++) {
     if(a%b==0){
     factsum +=b;
     }
    }
    if(a==factsum) {
    printf("\n %d is a perfect number",a);
    }
    else {
    printf("");
    }
    }
    return 0;
    }
