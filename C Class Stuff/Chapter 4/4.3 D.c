#include <stdio.h>

int main(void){
    unsigned int x = 1; //watch out it is supposed to start  at one not zero
    while(x <= 20){
    if((x % 5) == 0)
        printf("%d \n",x);
    else
        printf("%d ",x);
    
    x++;
    }

}