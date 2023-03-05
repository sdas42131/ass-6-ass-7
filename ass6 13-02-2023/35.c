// 35.	Write a program to delete the kth digit from last. e.g. input 23617 and k=4 output 2617.

#include<stdio.h>
#include<math.h>
int main(){
    double num, k, exp, frac_part, exp2, dec_part;
    printf("Enter number: ");
    scanf("%lf", &num);
    printf("Enter k: ");
    scanf("%lf", &k);
    exp = pow(10, k-1);
    exp2 = pow(10, k);
    frac_part = (int)num%(int)exp;
    dec_part = (int)(num/exp2);

    printf("output: %d", (int)((dec_part*exp) + frac_part));
}