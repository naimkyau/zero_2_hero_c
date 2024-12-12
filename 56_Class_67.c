
//      More about file I/O

#include <stdio.h>

int main() {
    FILE *ptr;

    // Mode: r (read)
    ptr = fopen("52_my.txt", "r");
    char buffer[50];
    fgets(buffer, sizeof(buffer), ptr);
    printf("Read using 'r': %s\n", buffer);
    fclose(ptr);

    // Mode: w (write, overwrite)
    ptr = fopen("52_my.txt", "w");
    fputs("This is written in 'w' mode.\n", ptr);
    fclose(ptr);

    // Mode: a (append)
    ptr = fopen("52_my.txt", "a");
    fputs("This line is appended using 'a' mode.\n", ptr);
    fclose(ptr);

    // Mode: r+ (read/write)
    ptr = fopen("52_my.txt", "r+");
    fgets(buffer, sizeof(buffer), ptr);
    printf("Read using 'r+': %s", buffer);
    fputs("Added this in 'r+' mode.\n", ptr);
    fclose(ptr);

    // Mode: w+ (write/read, overwrite)
    ptr = fopen("52_my.txt", "w+");
    fputs("This is written in 'w+' mode.\n", ptr);
    rewind(ptr);
    fgets(buffer, sizeof(buffer), ptr);
    printf("Read using 'w+': %s", buffer);
    fclose(ptr);

    // Mode: a+ (append/read)
    ptr = fopen("52_my.txt", "a+");
    fputs("Appended using 'a+' mode.\n", ptr);
    rewind(ptr);
    printf("Content after 'a+':\n");
    while (fgets(buffer, sizeof(buffer), ptr)) {
        printf("%s", buffer);
    }
    fclose(ptr);

    return 0;
}
