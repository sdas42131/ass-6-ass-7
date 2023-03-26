// Sum of first two digits after decimal.

#include<stdio.h>
void main(){
    float num;
    int sum, temp_num;
    printf("Enter the number: ");
    scanf("%f", &num);
    temp_num = num*100;
    sum = temp_num%10 + (temp_num/10)%10;
    printf("Sum of first two digits after decimal is: %d", sum);
}