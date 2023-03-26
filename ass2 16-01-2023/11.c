// Exchange digits around decimal.

#include<stdio.h>
void main(){
    float num, final;
    int temp_num;
    printf("Enter the number: ");
    scanf("%f", &num);
    temp_num = num*10;
    final = ((temp_num/100)*100 + (temp_num%10)*10 + (temp_num/10)%10 + (num*10) - temp_num)/10;
    printf("Number after exchanging digits around decimal is: %f", final);
}