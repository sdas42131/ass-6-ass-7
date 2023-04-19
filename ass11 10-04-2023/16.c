#include<stdio.h>

int ssf(int num){
    int ssf = 1, count = 0;
    for (int i = 2; i <= num/2; i++){
        if (num%i == 0){
            count++;
            if (count == 2){
                ssf = i;
                break;
            }
            
        }
    }
    return ssf;
    
}

int main(){
	printf("%d", ssf(130));
	
}