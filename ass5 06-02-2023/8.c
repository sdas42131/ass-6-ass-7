// 8.	Write program, which reads 5 numbers a, b, c, d, and x. The program output how many among a, b, c and d are equal to x. e.g. input 5 7 9 7 7 output 2. input 5 3 8 7 2 output 0. input 5 2 2 2 5 output 1.

#include <stdio.h>
int main()
{
    int a, b, c, d, x, count = 0;
    printf("Enter a: ");scanf("%d", &a);
    printf("Enter b: ");scanf("%d", &b);
    printf("Enter c: ");scanf("%d", &c);
    printf("Enter d: ");scanf("%d", &d);
    printf("Enter x: ");scanf("%d", &x);

    if (a == x)
        count++;
    if (b == x)
        count++;
    if (c == x)
        count++;
    if (d == x)
        count++;

    printf("%d numbers are equal to x.", count);
    
}