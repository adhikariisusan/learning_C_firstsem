/* WAP to input electricity unit charges and calculate total electricity bill using the given condition
    for first 50 units, Rs.0.5/unit
    for next 100 units, Rs0.75/unit
    for next 100 units, Rs. 1.2/unit
    for next all Rs. 1.5/unit
    additional 20% added to bill */


 #include<stdio.h>
    int main(){
    int un;
    float cost;
    printf("Input the number of units consumed :::\n");
    scanf("%d",&un);
        if(0<un<=50) {
            cost=.5*un;
        }
        else if(50<un<=150)
        {
            cost=50*.5+(un-50)*.75;
        }
        else if(150<un<=250)
        {
            cost=50*.5+100*.75+(un-150)*1.2;
        } else if(250<un)
        {
            cost=50*.5+100*.75+100*1.2+(un-250)*1.5;
        }
        else {
        printf("Invalid Input");

        }
        cost *=1.2;
        printf("The Cost of Your Electricity Bill is %.2f",cost);
            return 0;
        }
