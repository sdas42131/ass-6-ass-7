#include<stdio.h>
int main(){
    int array[5], freq[5], count;
    for (int i = 0; i < 5; i++)//input
    {
        printf("%dth: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++){// calculating frequency
        count = 1;
        for (int j = i + 1; j < 5; j++){
            if (array[j] == array[i]){
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0){
            freq[i] = count;
        }
    }

    printf("Frequency of elements: \n");
    for(int i = 0; i < 5; i++){
        if(freq[i] != 0)
            printf("%d occurs %d times\n", array[i], freq[i]);
    }
    
}