// Exchange the last two digits before decimal.

#include<stdio.h>
void main(){
    float num, final, frac_part;
    int int_num;
    printf("Enter the number: ");
    scanf("%f", &num);
    int_num = num;
    frac_part = num - int_num;
    final = (int_num/100)*100 + (int_num%10)*10 + (int_num/10)%10 + frac_part;
    printf("Number after exchanging the last two digits before decimal: %f", final);

}