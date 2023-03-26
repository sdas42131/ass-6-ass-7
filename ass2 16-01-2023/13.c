// Exchange digits around decimal.

// Find sum of first K digits after decimal.
#include<stdio.h>
void main(){
    int k, s = 0;
    float num, dec;
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("Add up to: ");
    scanf("%d", &k);
    dec = num - (int)num;
    for(int i = 1; i <= k; i++){
        s = s + (int)(dec*10);
        dec = (dec*10 - (int)(dec*10));
    }
    printf(" Sum of first %dth digits after decimal: %d", k, s);
    
}