
// Static variables   

#include <stdio.h>

int x = 100;        // Global variable

void display() {    // Local variable
    int y = 200;    
    printf("Global x in display(): %d\n", x);
}

void counter() {
    static int count = 0;  // Static variable
    count++;
    printf("Count: %d\n", count);
}

int main() {
    printf("Global x in main(): %d\n", x);
    display();

    counter();
    counter();
    counter();
    return 0;
}
