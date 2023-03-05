// 34.	Write a program, which deletes all digits except last k digits. e.g. input 23617 and k=3 output 617.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, count = 0, exp;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter k: ");
    scanf("%d", &k);
    exp = pow(10, k);

    printf("%d", num%exp);
}