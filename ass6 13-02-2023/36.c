// 36.	Write a program to print the kth digit e.g. input 23617 and k=4 output 1.

#include<stdio.h>
#include<math.h>
int main(){
    double num, k, exp, count = 0, old_num;
    printf("Enter number: ");
    scanf("%lf", &num);
    printf("Enter k: ");
    scanf("%lf", &k);
    old_num = num;

    while (old_num > 0){
        count++;
        old_num = (int)(old_num/10);
    }
    
    exp = pow(10, count-k);
    
    printf("%d", (int)(((int)(num/exp))%10));
}