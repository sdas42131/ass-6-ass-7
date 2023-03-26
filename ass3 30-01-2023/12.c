// 12.	Write program, which reads h, k, r, and s. Let a circle has center (h,k) and radius r. Let line x=s intersects the circle. The program outputs the chord length. Input 2 4 13 7 output 24. [Hint: find distance of the line from the center].

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, r;
    printf("Enter centre of the circle (x,y).");
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter radius: ");
    scanf("%d", &r);
}