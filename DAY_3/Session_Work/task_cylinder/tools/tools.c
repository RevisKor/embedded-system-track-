// import header file 
#include "tools.h"

float calculate_area(float radius) {
    float area = radius * radius * PI;
    return area;
}

float calculate_volume(float radius, float height) {
    float area = radius * radius * PI;
    float volume = area * height;
    return volume;
}

