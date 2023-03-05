// 7.	Write program to output the product of first digit and number. For above input 2*23617=47234 and 7*714=4998.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, count = 0, num_old, first_dig;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num > 0)
    {
        num = num/10;
        count++;
    }
    
    first_dig = (int)(num_old/pow(10, count-1));
    
    printf("output: %d", num_old*first_dig);
}