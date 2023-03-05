// 21.	Read a number. Do half of number after last odd digit of that number. Then result is multiplied by 3 as output.  Input 61389426 output 184167639 (61389213*3). Input 87 output 261. Input 78 output 222 (74*3).

#include<stdio.h>
#include<math.h>
int main(){
    int num, count = 1, exp, q, rem, old_num, q2, bef_fin;
    printf("Enter num: ");
    scanf("%d", &num);
    old_num = num;
    while (num > 0){
        if ((num%10)%2 == 0){
            break;
        }
        count++;
        num = num/10;
    }
    
    exp = pow(10, count);
    bef_fin = (((old_num/exp)*exp) + ((old_num%exp)/2));
    printf("%d", bef_fin*3);
}