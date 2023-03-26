#include<stdio.h>
int main(){
    int count = 5, count2 = 1;
    for (int i = 65; i <= 69; i++){
        int k = 65;
        for (int j = 1; j <= count; j++){
            printf("%c", k);
            k = k + count2;
        }
        printf("\n");
        count--;count2++;
    }
}