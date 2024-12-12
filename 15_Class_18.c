
// Type casting

#include <stdio.h>

int main() {
    float a1 = 5.3;
    float b1 = 2.4;
    int result1 = a1 + b1;
    printf("Float to Int : %d\n", result1);
    
    int a2 = 10; 
    int b2 = 3;
    float result2 = (float) a2 / b2;        // only "a2" convert to float 
    printf("Int to float : %.2f\n", result2);
    return 0;
}