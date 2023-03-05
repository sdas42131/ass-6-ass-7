// 44.	Write a program, which reads a number x and a digit (integer) y and puts y as first digit in x. If x=2531 and y=8 then output is 82531.

#include<stdio.h>
#include<math.h>
int main(){
    double x, num, count = 0, exp, y;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    num = x;

    while (x > 0){
        count++;
        x = (int)(x/10);
    }
    exp = pow(10, count);
    printf("%d", (int)(num + (y * exp)));
}