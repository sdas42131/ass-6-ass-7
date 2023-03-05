// 3.	Write program, which prints sum of all factors (input 24 output 2 + 3 + 4 + 6 + 8 + 12 + 24 = 59). Input 35 output 5+7+35=47.

#include<stdio.h>
int main(){
    int num, s = 0;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            s = s + i;
        }
    }

    printf("%d", s);
}