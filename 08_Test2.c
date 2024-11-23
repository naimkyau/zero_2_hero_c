
// print the type of gift for pass the exam 

#include <stdio.h>

int main()
{
    int m, s;
    int p = 1, f = 0;
    printf("\n");
    printf("*** Note ***\n");
    printf("If you pass in Math, input \"math = 1\" \nElse, input \"math = 0\"\n");
    printf("If you pass in science, input \"science = 1\" \nElse, input \"science = 0\"\n");
    printf("\n");
    printf("Input Your Resilt\n");
    printf("math \t= : ");
    scanf("%d", &m);
    printf("science\t= : ");
    scanf("%d", &s);
    printf("\n");
    if (m == p && s == p)
    {
        printf("\n!!! You passed both subject !!!\nYou have got \" 45 Taka \"");
    }
    else if (m == p && s == f)
    {
        printf("\nYou passed in math !\nYou have got \" 15 Taka \"");
    }
    else if (m == f && s == p)
    {
        printf("\nYou passed in science !\nYou have got \" 15 Taka \"");
    }
    else
    {
        printf("You failed in both subject !\n");
    }
    printf("\n");
    return 0;
}