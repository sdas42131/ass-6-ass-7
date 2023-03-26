#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 65; i <= 70; i++){
        int m = 65;
        for (int j = 1; j <= 6-count; j++){
            printf(" ");
        }
        for (int k = 1; k <= count; k++){
            printf("%c", m);
            m++;
        }
        printf("\n");
        count++;
    }
}