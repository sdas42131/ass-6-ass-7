// 6.	Write program, which reads a, b, and c. Let  ax + by + c = 0 be equation of a line. The program outputs the slope. Input  3  5  8 output 0.6.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter the value of your eq. of line: ");
    scanf("%f", &a);
    printf("Enter the value of your eq. of line: ");
    scanf("%f", &b);
    printf("Enter the value of your eq. of line: ");
    scanf("%f", &c);

    printf("The slope of your line is: %f", -a/b);
}
