// 11.	Write program, which reads a, b and c as sides of a triangle and prints the angle A in degree. Hint: a2 = b2 +  c2 – 2bcCOS(A).  [Hint: use acos. Example: input 13, 12, 5 output 90. input 10, 20, 17.32 output 30. input 7, 7, 7 output 60]

#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
    float a, b, c, rad;
    printf("Enter side1: ");
    scanf("%f", &a);
    printf("Enter side2: ");
    scanf("%f", &b);
    printf("Enter side3: ");
    scanf("%f", &c);

    rad = acos((b*b + c*c - a*a)/(2*b*c));

    printf("The angle is %f deg.", rad*(180/pi));
}