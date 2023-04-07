#include<stdio.h>
int main(){
    int array[5], duplicate = 0;

    for (int i = 0; i < 5; i++)//input
    {
        printf("%dth: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++){//duplicate check
        for (int j = i+1; j < 5; j++){
            if (array[i] == array[j]){
                duplicate++;
                break;
            }
        }
    }

    printf("Total duplicate elements: %d", duplicate);
}