// Delete digit before decimal

#include<stdio.h>
void main(){
    float num, final;
    int dig_bef_dec;
    printf("Enter the number: ");
    scanf("%f", &num);
    final = (int)(num/10) + (num - (int)num);
    printf("The digit before decimal is: %f", final);
    
}