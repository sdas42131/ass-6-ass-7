#include<stdio.h>
int main(){
    int count = 5, k =65, count2 = 1;
    for (int i = 65; i <= 69; i++){
        int k = i;
        for (int j = 1; j <= count; j++){
            printf("%c", k);
            k+=count2;
        }
        printf("\n");
        count--;count2++;
    }
}