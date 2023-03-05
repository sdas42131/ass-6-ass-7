// 50.	Write a program, which reads a float number (between 0 and 1)  and prints the sum of its first five digits. e.g. input 0.231562 output 2+3+1+5+6  = 17.

#include<stdio.h>
#include<math.h>
int main(){
    float a; int ans, s = 0;
    printf("Enter a: ");
    scanf("%f", &a);
    ans = a*10*10*10*10*10;

    while (ans > 0){
        s = s + ans%10;
        ans = ans/10;
    }
    
    printf("%d", s);
}