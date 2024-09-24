#include <stdio.h>

int main(void){
    float gal = 0;
    float mil = 0;
    float mil_gal = 0;
    int count = 0;
    float total_avrg;
    
    puts("Start Of Program");
    
    while(gal != -1){
        printf("Please input the amount of gallons (-1 to end):");
        scanf("%f \n", &gal);
        printf("Please input the amount of miles driven: ");
        scanf("%f \n", &mil);

        mil_gal = mil/gal;
        printf("The Miles per Gallon is: %f \n", mil_gal);

        ++count;
        total_avrg += mil_gal;


    }
    
    total_avrg = total_avrg / count;

    printf("The total average miles per gallon: %f", total_avrg );

}



