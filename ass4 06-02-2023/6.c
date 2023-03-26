// 6.Write program, which will print all even numbers less then 50 and all odd numbers more than 50.

#include<stdio.h>
int main(){
    int i = 2;
    printf("All even num less than 50: \n");
    while (i < 50)
    {
        printf("%d ", i);
        i+=2;
    }

    printf("\nAll odd num more than 50: \n");
    i = 51;
    while (i > 50)
    {
        printf("%d ", i);
        i+=2;}
    
}