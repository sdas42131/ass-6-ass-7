// 4.	Write program, which reads a, b and c as sides of a triangle and prints whether angle A is 90 deg or not. 

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter side1: ");scanf("%d", &a);
    printf("Enter side2: ");scanf("%d", &b);
    printf("Enter side3: ");scanf("%d", &c);

    if (a*a + b*b == c*c)
        printf("Angle A is 90 deg.");
    else if (a*a + c*c == b*b)
        printf("Angle A is 90 deg.");
    else if (b*b + c*c == a*a)
        printf("Angle A is 90 deg.");
    else if (a*a + b*b == c*c)
        printf("Angle A is 90 deg.");
    else
        printf("Angle A is not 90 deg.");

}