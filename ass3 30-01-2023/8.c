// 8.	Write program, which reads a, b, and c. Let  x2 + y2 + 2ax + 2by + c = 0 be equation of a circle. Print its center and radius. Input 10, -6 and -2 then output is center (-10,6) and radius 11.7. Here circle is x2+y2+20x12y2=0.

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter below info for x2 + y2 + 2ax + 2by + c = 0.\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    printf("The center is (%d, %d).", -1*a, -1*b);
    printf("The radius is: %f", sqrt(a*a + b*b - c));
}
