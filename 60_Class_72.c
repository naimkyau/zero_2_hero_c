
// Function Pointer

#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main() {
    int (* funcPtr)(int, int);
    funcPtr = &sum;
    int d = (*funcPtr)(7,6);
    printf("%d\n",d);
    return 0;
}