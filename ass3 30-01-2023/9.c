// 9.	Write program, which reads a, b, and c. Let  x2 + y2 + ax + by + c = 0 be equation of a circle. Print its center and radius. Input 10, 6 and 2 then output is center (5,3) and radius 6. Here circle is x2+y2+10x6y2=0.

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter below info for x2 + y2 + ax + by + c = 0.\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    a = a/2;
    b = b/2;

    printf("The center is (%d, %d).", -1*a, -1*b);
    printf("The radius is: %f", sqrt(a*a + b*b - c));
}