
//      Auto receipt generator      ( Haris )

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is a string
char * replaceWord(const char * str, const char * oldWord, const char * newWord)
{
    char * resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] !='\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if(strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else{
            resultString[i] = *str;
            i += 1;
            str +=1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    ptr = fopen("template.txt", "r");
    ptr2 = fopen("replaced.txt", "w");
    char str [200];
    fgets(str, 200, ptr);
    printf("Template\t: %s\n\n", str);

    // Call the replaceWord function and generate newStr
    char * newStr;
    newStr = replaceWord(str, "{{item}}", "Headphone");
    newStr = replaceWord(newStr, "{{outlet}}", "star tech");
    newStr = replaceWord(newStr, "{{name}}", "Naim");
    printf("Generated\t: %s\n", newStr);

    
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
