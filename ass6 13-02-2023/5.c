// 5.	Write program to print the kth digit from last. input 23617 and k=4 output 3. k=2, 1

#include<stdio.h>
#include<math.h>
int main(){
    int num, k;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Enter k; ");
    scanf("%d", &k);
    printf("output: %d", ((int)(num/pow(10, k-1)))%10);
}