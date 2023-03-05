// 14.	Write a program to find number of digits of a number. Input 423 output 3. Input 21151 output 5.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, count = 0, num_old, first_dig;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num > 0)
    {
        num = num/10;
        count++;
    }

    printf("output: %d", count);
}