#include<stdio.h>

int sf(int num){
    int smf = 1;
    for (int i = 2; i <= num/2; i++){
        if (num%i == 0){
            smf = i;
            break;
        }
    }
    return smf;
    
}

int main(){
	printf("%d", sf(24));
	
}