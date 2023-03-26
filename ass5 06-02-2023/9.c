// 9.	Write program, which reads three numbers. The program outputs the middle of these. 5,2,4 4.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a: ");scanf("%d", &a);
    printf("Enter b: ");scanf("%d", &b);
    printf("Enter c: ");scanf("%d", &c);

    if((a > b && a < c) || (a > c && a < b))
        printf("%d is middle.", a);
    else if ((b > a && b < c) || (b > c && b < a))
        printf("%d is middle.", b);
    else if ((c > a && c < b) || (c > b && c < a))
        printf("%d is middle.", c);

}