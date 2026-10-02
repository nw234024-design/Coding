#include <stdio.h>

// function declaration
float calculate_water_bill(float units);

int main()  
{
    float units;
    printf("Enter units consumed: ");
    scanf("%f", &units);
    
    // function call
    float bill = calculate_water_bill(units);
    printf("water_bill is: %.2f\n", bill);
    
    return 0;
}

// function definition
float calculate_water_bill(float units){
    float water_bills;
    
    if(units <= 30){
        water_bills = 20 * units;
    }
    else if(units > 30&& units <= 60){
        water_bills = 25 * units;
    }
    else { // units > 60
        water_bills = 30* units;
    }
    
    return water_bills;
}

