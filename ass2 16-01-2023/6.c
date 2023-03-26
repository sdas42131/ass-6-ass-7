// Delete second digit after decimal.

#include<stdio.h>
void main(){
    float num, frac_part, new_frac_part, final;
    printf("Enter the number: ");
    scanf("%f", &num);
    frac_part = num - (int)num;
    final = ((int)(num*100)/10 + ((num*100) - (int)(num*100)))/10;
    printf("Number after deleting second dig after decimal: %0.3f", final);
}