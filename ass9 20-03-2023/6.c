#include<stdio.h>
int main(){
    int array1[5] = {57, 2, 33, 340, 1}, array2[5] = {3, 160, 5, 19, 10}, array3[10], temp;

    for (int i = 0; i < 10; i++){//merging array1 and array2 in array3
        if (i < 5)
            array3[i] = array1[i];
        if (i >= 5 && i < 10)
            array3[i] = array2[i - 5];
        
    }

    for (int i = 0; i < 9; i++){// descending order
        for (int j = i + 1; j < 10; j++){
            if (array3[j] > array3[i]){
                temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++){//output
        printf("%d ", array3[i]);
    }
    
    
    
}