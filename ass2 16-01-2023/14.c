// Sum of K digits before decimal

#include<stdio.h>
void main(){
    float num;
    int k, intgr, s =0;
    printf("Enter the number: ");scanf("%f", &num);
    printf("Add up to: ");scanf("%d", &k);
    intgr = num;
    for (int i = 1; i <= k; i++){
        s = s + intgr%10;
        intgr = intgr/10;
    }

    printf("Sum of %d digits before decimal: %d", k, s);
    
}