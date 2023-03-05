// 30.	Write a program, which reads an integer and prints another integer. The output is reverse of the input. e.g. for input 27921 the output is 12972. Also print the double of the answer (i.e. 25944).

#include<stdio.h>
#include<math.h>
int main(){
    int num, large = 0, location, new_num = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0){
        new_num = new_num*10 + (num%10);
        num = num/10;
    }

    printf("output: %d, %d", new_num, new_num*2);
}