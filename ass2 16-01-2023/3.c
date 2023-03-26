// Find the second digit of a fractional part

#include<stdio.h>
void main(){
    float num, frac_part;
    int sec_dig;
    printf("Enter the number: ");
    scanf("%f", &num);
    frac_part = num - (int)num;
    sec_dig = ((int)(frac_part*100))%10;
    printf("Second digit of the frac part: %d", sec_dig);
}