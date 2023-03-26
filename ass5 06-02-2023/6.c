// 6.	Write program, which reads three numbers. Two of these are same and one of them is different. The program outputs the different number. e.g. input 5 5 2 output 2. Input 4 3 4 output 3. Input 5 2 2 output 5.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter num1: ");scanf("%d", &a);
    printf("Enter num2: ");scanf("%d", &b);
    printf("Enter num3: ");scanf("%d", &c);

    if(a!=c && b!=c)
        printf("%d", c);
    else if (a!=b && c!= b)
        printf("%d", b);
    else
        printf("%d", a);
    
}