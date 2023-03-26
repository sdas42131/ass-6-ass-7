#include<stdio.h>
int main(){
    for (int i = 69; i >= 65; i--){
        int k = i;
        for (int j = 1; j <= i-64; j++){
            printf("%c", k);
            k++;
        }
        printf("\n");
    }
}