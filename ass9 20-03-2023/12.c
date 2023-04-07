#include<stdio.h>
int main(){
    int array[6], temp, elem;
    printf("Enter array: ");
    for (int i = 0; i < 5; i++){//input
        scanf("%d", &array[i]);
    }

    printf("Enter element to add: ");
    scanf("%d", &elem);

    for (int i = 0; i < 5; i++){//adding element
        if(elem > array[i]){
            for (int j = 6; j > i; j--){
                temp = array[j];
                array[j] = array[j-1];
            }
            array[i] = elem;
            break;
        }
    }    

    printf("The array after adding element: ");
    for (int i = 0; i < 6; i++){//output
        printf("%d ", array[i]);
    }
}