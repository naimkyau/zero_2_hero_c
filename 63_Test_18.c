
// Area of the Circle Using Function Pointers

#include <stdio.h>
#include <math.h>

float EuclideanDistance(int x1, int x2, int y1, int y2){
    int a = (x2 - x1);
    int b = (y2 - y1);
    int p = pow(a, 2);
    int q = pow(b, 2);
    int c = (p + q);
    float dist = sqrt(c);
    return dist;
}

void AreaOfCircle(float(*fptr)(int , int , int , int ),int x1, int x2, int y1, int y2){
    float r = (*fptr)(x1, x2, y1, y2);
    float area = 3.14159 * (r*r);
    printf("Radius of the circle is \t: %.2f\n",r);
    printf("Area of the circle is \t\t:%.2f\n",area);
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter the value of x1 : ");
    scanf("%d",&x1);
    printf("Enter the value of y1 : ");
    scanf("%d",&y1);
    printf("Enter the value of x2 : ");
    scanf("%d",&x2);
    printf("Enter the value of y2 : ");
    scanf("%d",&y2);
    printf("\n");

    float (* funcPtr)(int,int,int,int);
    funcPtr = EuclideanDistance;
    AreaOfCircle(funcPtr, x1, x2, y1, y2);
    return 0;
}