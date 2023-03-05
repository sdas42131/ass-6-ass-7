// 48.	Write a program, which reads an integer (n) and n digits of a number (integer) in reverse order. The program outputs the number. e.g. n=5 and digits are 3 2 5 1 2 the output is  21523.

#include<stdio.h>
#include<math.h>
int main(){
    double n, dig, exp, final = 0;
    printf("Enter n: ");
    scanf("%lf", &n);
    printf("Enter number: ");

    for (int i = 1; i <= n; i++){
        scanf("%lf", &dig);
        final = final + dig*pow(10, i-1);
    }
    
    
    printf("%d", (int)final);
}