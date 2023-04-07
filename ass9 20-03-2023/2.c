#include<stdio.h>
int main(){
    int array[5], sum = 0;
    printf("Enter array elements:\n ");
    for (int i = 0; i < 5; i++)//input
    {
        printf("%dth: ", i);
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }

    printf("Sum of all elements: %d", sum);
    
}