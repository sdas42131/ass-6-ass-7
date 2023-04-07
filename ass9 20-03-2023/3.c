#include<stdio.h>
int main(){
    int array[5], array_copy[5];
    for (int i = 0; i < 5; i++)//input
    {
        printf("%dth: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)//copying
    {
        array_copy[i] = array[i];
    }

    printf("After copying elements: ");
    for (int i = 0; i < 5; i++)//output
    {
        printf("%dth: ", i);
        printf("%d\n", array_copy[i]);
    }
    
}