// 11.	Write a program, which reads two number (assume that both have same number of digits). The program outputs the sum of product of corresponding digits. Input 327 and 539 output 3x5+2x3+7x9=84. Input 5624 & 6435 output 5x6+6x4+2x3+4x5=80.

#include<stdio.h>
#include<math.h>
int main(){
    int num1, num2, s = 0, mul;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    while (num1 > 0 && num2 > 0){
        s = s + ((num1%10) * (num2%10));
        num1 = num1/10;
        num2 = num2/10;
    }
    
    printf("output: %d", s);
}