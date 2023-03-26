// 7.Write program, which reads a, b, c, d and e and prints the distance between point (x,y) and line cx+dy+e=0. [Hint: (xc+yd+e)/(c**2+d**2)**1/2.] input 6 7 3 4 2 output 9.6.

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, a, b, c;
    printf("Enter the cor-ord. of your point: ");
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    printf("Enter the co-eff. of line eq.:\n ");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    printf("The distance is: %f", ((x*a)+(y*b)+c)/sqrt(pow(a, 2) + pow(b, 2)));
}
