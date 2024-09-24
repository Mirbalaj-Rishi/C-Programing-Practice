//Trying to figure out how switch case works in C
// Example in page 124
#include <stdio.h>

int main(void){
    int userInput;
    while(1 == 1){ //this infinite loop is ment to make testing easier
        scanf("%d", &userInput);
        switch(userInput){
            case 1:
                puts("userInput == 1");
                break;
            case 2:
                puts("userInput == 1");
                break;
            case 3:
            case 4:
                puts("userInput == 3 or 4");
                break;

            default:
                puts("the user did not put in a 1, 2, 3 or 4");
        }
    }

}