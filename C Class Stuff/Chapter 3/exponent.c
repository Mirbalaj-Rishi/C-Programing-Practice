
#include <stdio.h>

int main(void){

	int x;
	int output;
	unsigned int y;
	unsigned int count = 2;
	puts("please type in your number and then the power");
	scanf("%d",&x);
	scanf("%u",&y);
	if(y != 0){
		output = x;
		while(count <= y){
			output = output * x;
			++count; 
		}
	}else{
	output = 1;
	}

	printf("The awnser is %d \n", output);

}