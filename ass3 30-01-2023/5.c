// 5.	Write program, which reads 6 numbers p, q, r, s, t and u. The program outputs the area of the triangle whose end points are (p,q), (r,s) and (t,u). [Hint: use above two questions]. Input 7  3  11  3  7  6 output 6.

#include <stdio.h>
#include <math.h>

int main()
{
    float area, x1, y1, x2, y2, x3, y3;
    printf("Enter x1: ");
    scanf("%f", &x1);
    printf("Enter y1: ");
    scanf("%f", &y1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter y2: ");
    scanf("%f", &y2);
    printf("Enter x3: ");
    scanf("%f", &x3);
    printf("Enter y3: ");
    scanf("%f", &y3);

    area = 0.5*((x1*(y2-y1)) + (x2*(y3-y1)) + (x3*(y1-y2)));

    printf("Area of the triangle is: %f", area);
}
