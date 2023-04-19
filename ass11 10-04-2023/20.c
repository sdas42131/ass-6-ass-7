#include<stdio.h>
#include<math.h>
int smn(int start, int end){
    int s = 0;
    for (int i = start; i <= end; i++){
        s = s + i;
    }
    return s;
    
}

int main(){
	printf("%d", smn(5, 9));
}