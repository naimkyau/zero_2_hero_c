
//      File I/O

#include <string.h>
#include <stdio.h>

int main(){
    FILE *ptr = NULL;
    ptr = fopen("my.txt", "r");

//      Reading a file 
    char string[20];
    // fscanf(ptr, "%s",string);
    fgets(string, 100, ptr);
    printf("The string before update \"%s\"\n",string);
    fclose(ptr);

//      Writing a file

    ptr = fopen("my.txt", "w");
    // char string2[20];
    printf("Update the string :");
    gets(string);
    fprintf(ptr, "%s", string);
    fclose(ptr);

//      Reading a file 

    ptr = fopen("my.txt", "r");
    // fscanf(ptr, "%s",string);
    fgets(string, 100, ptr);
    printf("The string after update \"%s\"\n",string);
    fclose(ptr);
    return 0;
}