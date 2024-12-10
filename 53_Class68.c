
// Command line arguments

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is : %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("\nthe value of argument number %d has \t%s\n", i + 1, argv[i]);
    }
    return 0;
}
