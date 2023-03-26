#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 69; i >= 65; i--){
        int small = 97;
        int caps = i;
        for (int j = 1; j <= count; j++){
            printf("%c", small);
            small++;
        }
        for (int k = 1; k <= 6 - count; k++){
            printf("%c", caps);
            caps--;
        }
        printf("\n");
        count++;
    }
}