// 5.	Write program, which reads a, b, and c. Let  ax + by + c = 0 be equation of a line. Print its slope. The program also prints whether the line is vertical or not.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter the value of a of your eq. of line: ");
    scanf("%f", &a);
    printf("Enter the value of b of your eq. of line: ");
    scanf("%f", &b);
    printf("Enter the value of c of your eq. of line: ");
    scanf("%f", &c);
    
    if (a > 0 || -a > 0)
        printf("The slope of your line is: %f and it's not vertical.", -a/b);
    else
        printf("The line is vertical.");
}