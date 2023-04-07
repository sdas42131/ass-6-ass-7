#include<stdio.h>
int main(){
    int array[5] = {15, 69, 78, 2, 1}, max = 0, min = _INTEGRAL_MAX_BITS;

    for (int i = 0; i < 5; i++){//duplicate check
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
        
    }

    printf("Max is: %d and Min is: %d", max, min);
}