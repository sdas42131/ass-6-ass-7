// 18.	Write program, which reads two numbers and finds the least common multiplier. e.g. input 24 and 54 then output is 216. [Do not use the method of (a*b/gcd(a,b)).] [Hint: modify above program by replacing x%i by i%x] 

#include<stdio.h>
int main(){
    int num1, num2, count = 0, s = 0, factor1, factor2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    for(int i = 2; i <= num1*num2; i++){
        if (i%num1 == 0 && i%num2 == 0){
            printf("%d ", i);
            break;
        }
    }
}