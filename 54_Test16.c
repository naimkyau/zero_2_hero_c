
// Command Line Calculator

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[] = "add";
    char str2[] = "subtract";
    char str3[] = "divide";
    char str4[] = "multiply";

    float num1 = atoi(argv[2]);
    float num2 = atoi(argv[3]);


            //  Add !!!
    if (strcmp(str1, argv[1]) == 0) {
        printf("%.0f + %.0f  =  %.0f\n", num1,  num2, num1 + num2);
    }

            //  Subtract !!!
    else if (strcmp(str2, argv[1]) == 0) {
        printf("%.0f - %.0f  =  %.0f\n", num1,  num2, num1 - num2);
    }

            //  Divide !!!
    else if (strcmp(str3, argv[1]) == 0) {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        printf("%.0f / %.0f  =  %.2f\n", num1,  num2, num1 / num2);
    }

            //  Multiply !!!
    else if (strcmp(str4, argv[1]) == 0) {
        printf("%.0f * %.0f  =  %.0f\n", num1,  num2, num1 * num2);
    }
    else
    {
        printf("Invalid Input\n");
    }
    

    return 0;
}