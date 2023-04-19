#include<stdio.h>

int sof(int num){
    int s = 0;
    for (int i = 2; i <= num; i++){
        if (num%i == 0){
            s = s + i;
        }
    }
    return s;
    
}

int main(){
	printf("%d", sof(35));
	
}