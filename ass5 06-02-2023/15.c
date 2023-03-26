// 15.	Write a program, which reads three integers X, Y and Z and prints Y+Z if X is 0. If X is 1 then Y-Z is printed. If X is 2 then Y*Z is printed. If X is 3 then Y/Z is printed. (use switch)

#include<stdio.h>
int main(){
    int x, y, z;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    switch (x)
    {
    case 0:
        printf("y + z = %d", y + z);
        break;
    case 1:
        printf("y - z = %d", y - z);
        break;
    case 2:
        printf("y x z = %d", y * z);
        break;
    case 3:
        printf("y / z = %f", y / z);
        break;
    default:
        printf("Enter 0, 1, 2 or 3");
    }
}