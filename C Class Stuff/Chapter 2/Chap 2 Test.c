
#include <stdio.h>

int main(void){

	int x;
	unsigned int y;
	unsigned int count = 2;
	scanf("Please type in your base: %d",&x);
	scanf("Please type in your power: %u",&y);
	if(y != 0){
		while(count < y){
			x = x * x;
		}
	}else{
	x = 1;
	}

	printf("The awnser is %d", x);

}