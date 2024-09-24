#include <stdio.h>
// for some reason you need to type the same thing twice in order to get an awnser

int main(void){
    unsigned int userInputLoop = 0;
    int userInput;
    int sum = 0;
    puts("please type in the total number of numbers and then all the numbers you want to add on a single line");
    scanf("%u ", &userInputLoop); // %u since it is an unsinged int
    for(int count = 1; count <= userInputLoop; count++){ // loop the amount of times the user specifies
        scanf("%d ", &userInput);
        sum += userInput;
    }
    
    printf("\n%d",sum);



}