#include <stdio.h>

int main(void){
    for(unsigned int x = 1; x <= 20; x++){
    if((x % 5) == 0)
        printf("%d \n",x);
    else
        printf("%d ",x);
    
    }

}