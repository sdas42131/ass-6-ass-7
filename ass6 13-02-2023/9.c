// 9.	Write program to find sum of all digits. Input 23617 outputs 2+3+6+1+7=19.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, s = 0, num_old;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num > 0)
    {
        s = s + num%10;
        num = num/10;
    }
    
    printf("output: %d", s);
}