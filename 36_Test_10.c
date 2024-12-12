/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>
#include <string.h>

typedef struct dvr{
    char name[32];
    char license[32];
    char route[32];
    char kms[10];
} driver;

int main() {
    int n;
    printf("How many driver details do you know? ");
    scanf("%d",&n);
    getchar();
    driver drivers[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter driver %d name \t: ",i+1);
        gets(drivers[i].name);
        printf("Enter driver %d license \t: ",i+1);
        gets(drivers[i].license);
        printf("Enter driver %d route \t: ",i+1);
        gets(drivers[i].route);
        printf("Enter driver %d kms \t: ",i+1);
        gets(drivers[i].kms);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",drivers[i].name);
        printf("%s\n",drivers[i].license);
        printf("%s\n",drivers[i].route);
        printf("%s\n",drivers[i].kms);
    }
    return 0;
}