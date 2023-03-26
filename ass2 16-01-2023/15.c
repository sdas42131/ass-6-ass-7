// Delete Kth digits after decimal

#include<stdio.h>
#include<math.h>
void main(){
    float num, dec, before_final, final;
    int k, exp, intgr;
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("Enter pos. of the digit what you want to delete after decimal: ");
    scanf("%d", &k);
    exp = pow(10, k);
    intgr = (int)(num*exp);
    dec = (num*exp) - intgr;
    intgr = intgr/10;
    before_final = intgr + dec;
    final = before_final/exp*10;
    printf("number after deleting Kth digits after decimal: %0.10f", final);
}