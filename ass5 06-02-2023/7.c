// 7.	Write program, which reads 5 numbers a, b, c, d, and x. Here a, b, c, and d are distinct and x is equal to exactly one of a or b or c or d. The program output which is equal to x. e.g. input 5 7 9 6 7 output x is equal to b. input 8 7 1 3 1 output x is equal to c.#include <stdio.h>

#include <stdio.h>
int main()
{
    int a, b, c, d, x;
    printf("Enter a: ");scanf("%d", &a);
    printf("Enter b: ");scanf("%d", &b);
    printf("Enter c: ");scanf("%d", &c);
    printf("Enter d: ");scanf("%d", &d);
    printf("Enter x: ");scanf("%d", &x);

    if (a == x)
        printf("x is equal to a");
    else if (b == x)
        printf("x is equal to b");
    else if (c == x)
        printf("x is equal to c");
    else if (d == x)
        printf("x is equal to d");
    
}