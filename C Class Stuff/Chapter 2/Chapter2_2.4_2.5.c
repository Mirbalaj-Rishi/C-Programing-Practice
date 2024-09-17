/* 
Chapter 2 
Page 62 
section 2.4 and 2.5
*/

#include <stdio.h>

int main(void){
    puts("This program will calculate the product of three integers"); // calcualte the product of three integers
    int x, y, z;
    printf("Please type in the three integers: "); //ask the user for integers
    scanf("%d %d %d", &x, &y, &z);
    
    int product; // this the solution 
    product = x * y * z;

    printf("The product is %d", product);
    








}