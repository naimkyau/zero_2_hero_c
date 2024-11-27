
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

#include <stdio.h>
int sum_sub(int* a, int* b){
    *a += *b;
    *b = ((*a-*b)-*b);
}
int main() {
    int a, b;
    printf("Enter the number of a : ");
    scanf("%d",&a);
    printf("Enter the number of b : ");
    scanf("%d",&b);
    printf("After\ta = %d\tb = %d\n",a, b);
    sum_sub(&a, &b);
    printf("\n");
    printf("Before\ta = %d\tb = %d\n",a, b);
    return 0;
}