// 40.	Write a program, which reads a number the finds special product. If number is 2314 then output is 4 + 1x4 + 3x1x4 + 2x3x1x4 = 44. If input number is 223 then output is 3 + 2x3 + 2x2x3 = 21.

#include<stdio.h>
#include<math.h>
int main(){
    double num, s = 0, m = 1, count = 1, exp;
    printf("Enter number: ");
    scanf("%lf", &num);

    while (num > 0){
        exp = pow(10, count);
        m = ((int)m * ((int)num%10));
        s = s + m;
        count++;
        num = num/10;
    }
    
    printf("%d", (int)s);
}