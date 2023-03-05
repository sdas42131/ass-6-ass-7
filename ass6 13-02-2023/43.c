// 43.	Write a program, which reads a number and prints a number after deleting the first digit. If input is 2314 then output is 314. If input is 56 then output is 6.

#include<stdio.h>
#include<math.h>
int main(){
    int num, count = 0, exp, old_num;
    printf("Enter number: ");
    scanf("%d", &num);
    old_num = num;

    while (num > 0){
        count++;
        num = num/10;
    }
    exp = pow(10, count - 1);
    printf("%d", (int)(old_num%exp));
}