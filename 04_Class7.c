#include <stdio.h>

/*
        Arithmetic Operators
        Relational Operators
        logical operators
        Bitwise Operators
        Assignment Operators
        Miscellaneous Operators
        Operator Precedence
*/

struct Point {
    int x, y;
};

int main()
{

    //                       Arithmetic Operators
    //         The % (modulus) operator works only on the int (integer) data type.

        int a;
        int b;
        int c;
        a = 24;
        b = 5;
        c = 20;

        printf("Arithmetic Operators\n");
        printf("a + b = %d\n", a + b);
        printf("a - b = %d\n", a - b);
        printf("a * b = %d\n", a * b);
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % a);

    //                        Relational Operators
        printf("\n");
        printf("Relational Operators\n");
        if (a == b){
            printf("a is equal to b\n");
        }
        if (a != b){
            printf("a is not equal to b\n");
        }
        if (a > b){
            printf("a is greater than b\n");
        }
        if (a < b){
            printf("a is less than b\n");
        }
        if (a >= b){
            printf("a is greater than or equal to b\n");
        }
        if (a <= b){
            printf("a is less than or equal to b\n");
        }

    //                        logical operators

        if (a > 0 && b > 0) {
            printf("Both a and b are positive.\n");
        }

        // Logical OR (||)
        if (a > 0 || c > 0) {
            printf("At least one of a or c is positive.\n");
        }

        // Logical NOT (!)
        if (!(c > 0)) {
            printf("c is not positive.\n");
        }


    //                    Bitwise Operators
    
        printf("a & b: %d\n", a & b);
        printf("a | b: %d\n", a | b);
        printf("a ^ b: %d\n", a ^ b);
        printf("~a: %d\n", ~a);      
        printf("a << 1: %d\n", a << 1); 
        printf("a >> 1: %d\n", a >> 1); 

    //                    Assignment Operators

        a += 5;   // a = a + 5
        printf("After a += 5: %d\n", a);

        a -= 3;   // a = a - 3
        printf("After a -= 3: %d\n", a);

        a *= 2;   // a = a * 2
        printf("After a *= 2: %d\n", a);

        a /= 4;   // a = a / 4
        printf("After a /= 4: %d\n", a);

        a %= 3;   // a = a % 3
        printf("After a %%= 3: %d\n", a);  

    //                  Miscellaneous Operators

        int d = 10;
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Size of variable a: %zu bytes\n", sizeof(d));
        int e = 10;
        int *ptr = &e;
        printf("Address of a: %p\n", &e);
        printf("Value of a using pointer: %d\n", *ptr);
        struct Point p1 = {10, 20};
        struct Point *ptr2 = &p1;
        printf("Using . operator: x = %d, y = %d\n", p1.x, p1.y);
        printf("Using -> operator: x = %d, y = %d\n", ptr2->x, ptr2->y);
        float f = 5.7;
        int g = (int)f;
        printf("Original value: %.2f\n", f);
        printf("Casted value: %d\n", g);
        int h = 10, i = 20;
        int max = (h > i) ? h : i;
        printf("Maximum: %d\n", max);
        int j, k, l;
        j = (k = 5, l = 10, k + l);  
        printf("Value of a: %d\n", j);

    /*                  Operator Precedence
    
    
    () [] -> . ++ --
    sizeof & * (type) -- ++ ~ ! - +
    * / %
    + -
    << >>
    < <= > >=
    == !=
    

    */

    return 0;
}