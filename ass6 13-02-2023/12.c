// 12.	Write a program to print positional values of digits of a number. Input 21463 output 3, 60, 400, 1000 and 20000. Input 451 outputs 1, 50 and 400.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, count = 0, num_old, p_v;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num > 0)
    {
        p_v = (num%10)*pow(10, count);
        printf("%d ", p_v);
        num = num/10;
        count++;
    }
}