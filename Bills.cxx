#include <stdio.h>

// function declaration
float calculate_electricity_bill(float units);

int main()  
{
    float units;
    printf("Enter units consumed: ");
    scanf("%f", &units);
    
    // function call
    float bill = calculate_electricity_bill(units);
    printf("Electricity bill is: %.3f\n", bill);
    
    return 0;
}

// function definition
float calculate_electricity_bill(float units){
    float electricity_bills;
    
    if(units <= 100){
        electricity_bills = 10 * units;
    }
    else if(units > 100 && units <= 200){
        electricity_bills = 15 * units;
    }
    else { // units > 200
        electricity_bills = 20 * units;
    }
    
    return electricity_bills;
}
