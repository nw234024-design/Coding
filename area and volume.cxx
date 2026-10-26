/*
Nancy kabiri
CT100/G/30629/26
Week 2 assignment
*/
#include <stdio.h>
# include <math.h>

#define PI 3.142

int main() {
    float radius, height, volume, surfaceArea;
    printf("Enter radius\t");
    scanf("%f", &radius);
    printf("Enter height\t ");
    scanf("%f", &height);

    volume = (PI * radius * radius * height);
    surfaceArea =(2 * PI * radius * radius + 2 * PI * radius * height);

    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);
    return 0;
}
