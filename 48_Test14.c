
//      Palindrome number

#include <string.h>
#include <stdio.h>


int main() {
    char in[100], out[100];
    int len;
    printf("Enter the string : ");
    gets(in);

    len = strlen(in);

    for (int i = 0; i < len; i++){
        out[i] = in[len-i-1];
    }
    out[len]='\0';
    // printf("%s\n",out);

    printf("\nEntered string \t\t: %s\n", in);
    printf("Palindrome string \t: %s\n\n", out);

    if (strcmp(in, out) == 0){
        printf("The string is a palindrome\n\n");
    }
    else{
        printf("The string is not a palindrome\n\n");
    }
    return 0;
}