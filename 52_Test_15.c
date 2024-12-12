
//      Auto receipt generator      

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main() {


    FILE *ptr = NULL;
    ptr = fopen("50_my.txt", "w");

    char name[32];
    char item[32];
    char shop[32];

    printf("Enter the name of customer : ");
    gets(name);
    printf("Enter the name of item : ");
    gets(item);
    printf("Enter the name of shop : ");
    gets(shop);

    fprintf(ptr, "Thanks %s for purchasing %s from our outlet %s. Please visit our outlet %s for any kind of problems. We plan to server you again soon.", name, item, shop, shop);
    
    fclose(ptr);
    // fclose(ptr2);
    return 0;
}