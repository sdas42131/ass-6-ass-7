// 20.	Write program, which finds the sum of product of consecutive factors. e.g. if given number is 12 then answer is 114. Since 2.3+3.4+4.6+6.12=114. 

#include<stdio.h>
int main(){
    int num, s = 0, m = 0;
    printf("Enter the num1: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num % i == 0){
            s = s + m*i;
            m = i;
        }
    }

    printf("%d", s);
}