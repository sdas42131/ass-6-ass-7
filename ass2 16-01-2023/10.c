// Sum of digits around decimal.

#include<stdio.h>
void main(){
    float num;
    int sum, temp_num;
    printf("Enter the number: ");
    scanf("%f", &num);
    temp_num = num*10;
    sum = temp_num%10 + (temp_num/10)%10;
    printf("Sum of digits around decimal is: %d", sum);
}