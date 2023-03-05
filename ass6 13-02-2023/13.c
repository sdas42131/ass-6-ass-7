// 13.	Write a program to find sum of even digits of a number. Input: 23617 output: 2+6=8. Input: 4856, output:18.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, s = 0, num_old, p_v;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num > 0){
        if ((num%10)%2 == 0)
            s = s + (num%10);

        num = num/10;
    }

    printf("%d", s);
}