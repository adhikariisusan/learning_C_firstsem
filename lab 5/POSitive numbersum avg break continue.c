//WAP to calculate the sum and average of positive numbers if the users entered negative use break continue and goto statement to sow the result
 #include<stdio.h>
int main() {
int a,b,sum=0,count=0;
printf("Enter Your Number \n");
scanf("%d",&a);
if(a<=0) {
goto end;
} else {
b=a;
do {
sum +=b;
b--;
count++;
} while(b>0);
printf(" The sum is %d",sum);
float avg=sum/count;
printf("\nThe average is %f",avg);
}
end:
return 0;
}
