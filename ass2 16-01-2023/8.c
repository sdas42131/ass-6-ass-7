// Double the digit after decimal.

#include<stdio.h>
void main(){
    float num, final, temp_num;
    printf("Enter the number: ");
    scanf("%f", &num);
    temp_num = num*10;
    final = ((((int)(temp_num))/10)*10 + (((int)(temp_num))%10)*2 + (temp_num - ((int)temp_num)))/10;
    printf("Number after doubling the dig after decimal: %f", final);

}