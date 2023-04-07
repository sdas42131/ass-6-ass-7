#include<stdio.h>
int main(){
    int array[5] = {15, 69, 73, 2, 1}, odd[5], even[5], ind_even = 0, ind_odd = 0;

    for (int i = 0; i < 5; i++){//separate odd and even nums
        if (array[i] % 2 == 0){
            even[ind_even] = array[i];
            ind_even++;
        }
        else{
            odd[ind_odd] = array[i];
            ind_odd++;
        }
        
    }

    printf("The array of even num: ");
    for (int i = 0; i < ind_even; i++)//printing even array
    {
        printf("%d ", even[i]);
    }

    printf("\nThe array of odd num: ");
    for (int i = 0; i < ind_odd; i++)//printing odd array
    {
        printf("%d ", odd[i]);
    }
    
}