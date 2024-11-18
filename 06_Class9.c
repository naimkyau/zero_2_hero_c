#include <stdio.h>
/*
        Constant
        Format Specifier
        Constant
        Escape Sequences
*/
#define pi 3.1416

int main() {
    
//          Format Specifier
    int a = 25;
    float b = 15.24;
    printf("Naim %f Naim\n",b);
    printf("Naim %.2f Naim\n",b);
    printf("Naim %10.2f Naim\n",b);
    printf("Naim %-10.0f Naim\n",b);
    int num = 20;
    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %x\n", num);

//          Constant 
   const float c = 6.623;
    printf("%.3f\n", c);
    printf("%.4f\n", pi);

//          Escape Sequences
    printf("Using \\n for new line: naim \nahmed\n");

    printf("Using \\t for tab space: naim\t ahmed\n");

    printf("Using \\b for backspace: naim\b ahmed\n");


    return 0;
}