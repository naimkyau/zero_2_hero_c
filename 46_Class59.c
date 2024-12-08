
//      #include
//      #define

#include <stdio.h>

#define PI 3.1415
#define MAX_LENGTH 10
#define AREA_OF_CIRCLE(r) (PI * (r) * (r)) 

int main() {
    
    printf("Value of PI: %f\n", PI);
    printf("Max Length: %d\n", MAX_LENGTH);
    
    
    double radius = 5.0;
    printf("Area of Circle with radius %.2f: %.2f\n", radius, AREA_OF_CIRCLE(radius));
    
    
    #define DEBUG  
    
    #ifdef DEBUG
    printf("Debug Mode: Radius = %.2f, Area = %.2f\n", radius, AREA_OF_CIRCLE(radius));
    #endif

    return 0;
}
