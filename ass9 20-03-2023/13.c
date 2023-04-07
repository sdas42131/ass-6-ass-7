#include<stdio.h>
int main(){
    int array[6], temp, elem, pos;
    printf("Enter array: ");
    for (int i = 0; i < 5; i++){//input
        scanf("%d", &array[i]);
    }

    printf("Enter element to add: ");//input of element
    scanf("%d", &elem);

    printf("Enter position: ");//input of position
    scanf("%d", &pos);

    for (int j = 6; j > pos-1; j--){//adding element
        temp = array[j];
        array[j] = array[j-1];
    }    
    array[pos-1] = elem;

    printf("The array after adding element: ");
    for (int i = 0; i < 6; i++){//output
        printf("%d ", array[i]);
    }
}