// 4.	Write program to delete the last k digits. input 23617 and k=3 output 23. k=2, 236

#include<stdio.h>
#include<math.h>
int main(){
    int num, k;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Enter k; ");
    scanf("%d", &k);
    printf("output: %d", (int)(num/pow(10, k)));
}