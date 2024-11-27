
// Strings 

#include <stdio.h>

void print_name(char name[]){
    printf("Function\t ");
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c",name[i]);
    }
}

int main() {
    char name[32];
    gets(name);
    printf("Printf\t\t %s\n", name);
    printf("Puts\t\t");
    puts(name);
    print_name(name);
    return 0;
}