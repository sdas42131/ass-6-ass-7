// 27.	Write a program, which reads an integer and prints another integer. In the output all even digits are retained and odd digits are decrement by 1. e.g. input 23145 output 22044.

#include<stdio.h>
#include<math.h>
int main(){
    int num, exp, count = 1, old_num, new_num;
    printf("Enter number; ");
    scanf("%d", &num);
    old_num = num;

    while (num > 0){
        if ((num%10)%2 != 0){ 
            exp = pow(10, count);
            new_num = (((int)(old_num/exp))*exp) + ((old_num%exp) - (exp/10));
            old_num = new_num;
        }
        num = num/10;
        count++;
    }
    
    printf("output: %d", old_num);
}