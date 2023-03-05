// 45.	Write a program, which reads a number and adds 1 to every digit. If input is 2314 then output is 3425. Assume that no digit is 9.

#include<stdio.h>
#include<math.h>
int main(){
    int num, count = 0, exp, old_num;
    printf("Enter number: ");
    scanf("%d", &num);
    old_num = num;

    while (num > 0){
        old_num = old_num + pow(10, count);
        num = num/10;
        count++;
    }
    
    printf("%d", old_num);
}