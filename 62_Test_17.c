
// Class 73 Task 

#include <stdio.h>


float avg(float a, float b){
    float sum;
    float avg;
    sum = a + b;
    avg = sum /2;
    return avg;
}

void GoodAfternoon(float (*fptr)(float, float), float a, float b){
    printf("\nGood Afternoon\n");
    fptr = avg;
    printf("The average of %.0f and %.0f is : %.2f\n", a, b, avg(a,b));
}
void GoodEvening(float (*fptr)(float, float), float a, float b){
    printf("\nGood Evening\n");
    fptr = avg;
    printf("The average of %.0f and %.0f is : %.2f\n", a, b, avg(a,b));
}

int main() {
    float a, b;
    printf("Enter 1st number : ");
    scanf("%f",&a);
    printf("Enter 2nd number : ");
    scanf("%f",&b);
    float (* funcPtr)(float, float);
    funcPtr = avg;
    
    GoodAfternoon(funcPtr, a, b);
    GoodEvening(funcPtr, a, b);
    return 0;
}
