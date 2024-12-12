
//      Predefined Macros

#include <stdio.h>

int main() {
    printf("File name is \t\t: %s\n", __FILE__);
    printf("Today's date is \t: %s\n", __DATE__);
    printf("Time now is \t\t: %s\n", __TIME__);
    printf("Line no is \t\t: %d\n", __LINE__);
    printf("ANSI or not \t\t: %d\n", __STDC__);
    

    return 0;
}