
// Array pointer

#include <stdio.h>

int main() {
    int a = 25;
    int *ptr1 = &a;
    printf("%u\n",ptr1);
    ptr1++;
    printf("%u\n",ptr1);
    ptr1 -= 2;
    printf("%u\n",ptr1);

    int arr[5]={1,2,3,4,5};
    int* ptr2 = arr;
    
    printf("%u\n", &arr[0]);
    printf("%u\n", arr);
    printf("%u\n", *(&arr[0]));
    printf("%u\n", *(arr));
printf("\n");
    printf("%u\n", &arr[1]);
    printf("%u\n", arr+1);
    printf("%u\n", *(&arr[1]));
    printf("%u\n", *(arr+1));
    return 0;
}