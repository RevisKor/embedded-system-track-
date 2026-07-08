#include <stdio.h>
#include "tools/tools.h"


int main() {
    float radius, height, circle_area, cylinder_volume;

    // circle area
    printf("Enter the radius of the circle (cm): ");
    scanf("%f", &radius);

    circle_area = calculate_area(radius);

    printf("The Area of a circle of radius %.2f cm is %.2f cm squared\n", radius, circle_area);

    // cylinder volume
    printf("Enter the radius of the cylinder (cm): ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder (cm): ");
    scanf("%f", &height);

    cylinder_volume = calculate_volume(radius, height);

    printf("The volume of a cylinder of radius %.2f cm is %.2f cm cubed\n", radius, cylinder_volume);

    return 0;
}