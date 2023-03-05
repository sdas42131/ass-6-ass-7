// 39.	Write a program, which reads a number the finds special sum in the following way. If number is 2314 then output is 2314 + 231 + 23 + 2 = 2570. If input number is 223 then output is 223 + 22 + 2 = 247.

#include<stdio.h>
#include<math.h>
int main(){
    double num, s = 0, count = 1, exp;
    printf("Enter number: ");
    scanf("%lf", &num);

    while (num > 0){
        s = s + (int)num;
        num = num/10;
    }
    
    printf("%d", (int)s);
}