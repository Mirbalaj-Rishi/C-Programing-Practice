#include <stdio.h>


int main(void){
    int MAXCOUNT = 50000;
    int NUMBERCOUNT = 7;
    for(int count=NUMBERCOUNT; count < MAXCOUNT; count += NUMBERCOUNT) 
        printf("%d\n",count);
    

}