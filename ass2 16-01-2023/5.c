// Delete first digit after decimal

#include<stdio.h>
void main(){
    float num, frac_part, new_frac_part, final;
    printf("Enter the number: ");
    scanf("%f", &num);
    frac_part = num - (int)num;
    new_frac_part = (frac_part*10) - (int)(frac_part*10);
    final = (int)num + new_frac_part;
    printf("Number after deleting first dig after decimal: %0.4f", final);

    
}