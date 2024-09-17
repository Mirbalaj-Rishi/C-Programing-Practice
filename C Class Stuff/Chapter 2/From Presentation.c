int x = 5;
int y = 8; 

#include <stdio.h>
int main(void){

    printf("%5d%8.3f\n", 753, 4.1678);
    printf("%5d%80.3f\n\n", 753, 4.1678);

    //self testing
    printf("%3.1f%5d\n",7.3,10); //10 takes 2 columns so this adds 3 spaces in front of it
    printf("%3.1f%2d\n",7.3,10); //10 takes 2 columns so there are no spaces left for it
    printf("%1d\n",10); 
    printf("%3.1f%d\n",7.3,10);
    printf("%3.1f%d\n",10,7.3);
}