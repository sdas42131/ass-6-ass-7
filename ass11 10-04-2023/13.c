#include<stdio.h>
#include<math.h>

int inc(double num){
    double dig, new_num = 0, count = 5;
    while (num > 0){
        dig = ((int)num%10);
        if((int)dig%2 == 0)
            dig++;

        new_num = new_num + dig*pow(10, 5-count);
        count--;
        num = (int)(num / 10);
    }
	return (int)new_num;
}

int main(){
	printf("%d", inc(23768));
}