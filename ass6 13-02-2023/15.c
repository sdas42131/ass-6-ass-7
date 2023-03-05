// 15.	Write a program to find number of even digits of a number.  Input 423 output 2. Input 21151 output 1.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, count = 0, p_v;
    printf("Enter num: ");
    scanf("%d", &num);
    while (num > 0){
        if ((num%10)%2 == 0)
            count++;
        num = num/10;
    }

    printf("%d", count);
}