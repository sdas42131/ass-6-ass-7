// 3.	Write program, which reads a, b and c as sides of a triangle and prints area. Hint: area =  . [Hint:   is (a+b+c)/2] [sqrt(x) will find square root]. Input 5  7  10 output 16.24. 

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, area, s;
    printf("Enter side 1: ");
    scanf("%f", &a);
    printf("Enter side 2: ");
    scanf("%f", &b);
    printf("Enter side 3: ");
    scanf("%f", &c);
    
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is: %f", area);

  return 0;
}