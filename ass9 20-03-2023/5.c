#include<stdio.h>
int main(){
    int array[5], duplicate;
    for (int i = 0; i < 5; i++)
    {
        printf("%dth: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++){//duplicate check
        duplicate = 0;
        for (int j = 0; j < 5; j++){
            if (i != j)
            {
                if (array[i] == array[j]){
                    duplicate++;
                }
            }
        }
        if (duplicate == 0) //checking if unique
            printf("%d ", array[i]);
        
    }
    
}