
// string function

#include <stdio.h>
#include <string.h>

int main() {
    char name1[]="Naim ";
    char name2[]="Ahmed ";
    char name3[]="Siam ";
    char name4[20];
    printf("%s\n" ,strcat(name1, name2));    // add 2 string !!!     can't add 3 string .
    printf("%d\n",strlen(name2));            // length of a string
    printf("%s\n",strrev(name1));            // revese the string
    printf("%s\n",strcpy(name4,name1));
    return 0;
}