// Insert 1 as digit before decimal.

#include<stdio.h>
void main(){
    float num, final;
    printf("Enter the number: ");
    scanf("%f", &num);
    final = (((int)num)*10 + 1) + (num - (int)num);
    printf("Number after inserting 1 as digit before decimal: %f", final);
}