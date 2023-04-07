#include<stdio.h>
int main(){
    int array[6], temp, pos;
    printf("Enter array: ");
    for (int i = 0; i < 5; i++){//input
        scanf("%d", &array[i]);
    }

    printf("Enter position: ");//input of position
    scanf("%d", &pos);

    for (int j = pos-1; j < 5; j++){//deleting element
        array[j] = array[j+1];
    }

    printf("The array after deleting element: ");
    for (int i = 0; i < 4; i++){//output
        printf("%d ", array[i]);
    }
}