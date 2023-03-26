// 13.	No income tax is to be paid if income is less than 5000. If income is between 5000 and 6000 then tax is 10% of the amount by which the income exceeds 5000. If income is between 6000 and 15000 then the tax is 100 + 20% of the amount by which the income exceeds 6000. If income is more than 15000 then the tax is 1900 + 30% of the amount by which the income exceeds 15000. e.g. if income is 10000 then the tax will be 100 + (10000-6000)*20/100 = 900. Write a program, which reads income and calculates the income tax. 

#include<stdio.h>
int main(){
    int income;
    printf("Enter your income: ");
    scanf("%d", &income);

    if (income < 5000)
        printf("No need to pay income tax.");
    else if (income >= 5000 && income < 6000)
        printf("You will pay Rs. %f", income*0.1);
    else if (income >= 6000 && income < 15000)
        printf("You will pay Rs. %f", 100 + income*0.2);
    else if (income >= 15000)
        printf("You will pay Rs. %f", 1900 + income*0.3);
}