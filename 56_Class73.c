
// Callback Functions Using Function Pointers

#include <stdio.h>


int sum(int a, int b){
    return a+b;
}

void Hello(int (*fptr)(int, int)){
    printf("\nHello\t");
    fptr = sum;
    printf("%d\n",(fptr)(15,17));
}
void Morning(int (*fptr)(int, int)){
    printf("\nMorning\t");
    fptr = sum;
    printf("%d\n",(fptr)(25,21));
}

int main() {
    int (* funcPtr)(int, int);
    funcPtr = &sum;
    
    printf("Sum\t%d\n",sum(4, 6));
    Hello(funcPtr);
    Morning(funcPtr);
    return 0;
}
