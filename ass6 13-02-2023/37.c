// 37.	Write a program to delete first kth digits e.g. input 23617 and k=2 output 617.

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
    
    printf("%d", (int)((int)num%(int)exp));
}