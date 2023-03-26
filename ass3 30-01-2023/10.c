// 10.	Write program, which reads a, b, c, p, q and r. Let  ax + by + c = 0  and px + qy + r = 0 be equations of lines. Print their point of intersection. Input 4 8 12 2 7 3 output (-5,1).

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c, p, q, r;
    printf("Enter below info for ax + by + c = 0 and and px + qy + r = 0\n");

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter p: ");
    scanf("%d", &p);
    printf("Enter q: ");
    scanf("%d", &q);
    printf("Enter r: ");
    scanf("%d", &r);

    printf("The point of intersection is: (%d, %d)", (b*r-q*c)/(a*q-p*b) , (p*c-a*r)/(a*q-p*b));
}

