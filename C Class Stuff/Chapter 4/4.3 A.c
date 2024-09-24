#include <stdio.h>



int main(void){
    unsigned int sum = 0;
    for(unsigned int count = 1; count <= 99; count += 2){
        sum += count;

    }

    printf("sum %d",sum);


}