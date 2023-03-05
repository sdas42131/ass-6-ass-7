// 51.	Write a program, which reads an integer (n) and n digits of a float number (between 0 and 1) in correct order. The program outputs the number. e.g. n=5 and digits are 3 2 5 1 2 the output is  0.32512.

#include<stdio.h>
#include<math.h>
int main(){
    double n, dig, num= 0;
    printf("Enter n: ");
    scanf("%lf", &n);
    printf("Enter numbers: ");

    for (int i = 0; i < n; i++){
        scanf("%lf", &dig);
        num = num + dig*pow(10, n-i-1);
    }
    
    printf("output: %0.5lf", (int)num/pow(10, n));
    
}