// 38.	Write a program, which reads a number the finds special sum. If number is 2314 then output is 4 + 14 + 314 + 2314 = 2646. If input number is 223 then output is 3 + 23 + 223 = 249. If input is 12564 then output is 4 + 64 + 564 + 2564 + 12564 = 15760.

#include<stdio.h>
#include<math.h>
int main(){
    double num, s = 0, count = 1, exp; int old_num;
    printf("Enter number: ");
    scanf("%lf", &num);
    old_num = num;

    while (old_num > 0){
        exp = pow(10, count);
        s = s + (int)num%(int)exp;
        count++;
        old_num = old_num/10;
    }
    
    printf("%d", (int)s);
}