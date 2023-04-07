#include<stdio.h>
int main(){
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%dth: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%dth: ", i);
        printf("%d\n", array[i]);
    }
    
}