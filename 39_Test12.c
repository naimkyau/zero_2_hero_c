/* 
Create Rock, Paper & Scissors Game
Player 1: rock
Player 2 (computer): scissors -->player 1 gets 1 point
rock vs scissors - rock wins
paper vs scissors - scissors wins
paper vs rock - paper wins
1 vs 3 - 1 wins
2 vs 3 - 3 wins
2 vs 1 - 2 wins

1 == rock     
2 == paper     
3 == scissors

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum()
{
    int rnd;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        int a = (rand() % 3);
        rnd = a + 1;
    }
    return rnd;
}

int main()
{
    int p;
    int p_p = 0;
    int p_c = 0;
                // Rulse
    printf("\nrock vs scissors\t-- rock wins \npaper vs rock\t\t-- paper wins\npaper vs scissors\t-- scissors wins \n\n1 == rock\t2 == paper\t3 == scissors\n\nIf you want to quit from games press \"0\"\n\n");   

    for (int i = 0; i < 5; i++){
        printf("choose a nubmer : ");
        scanf("%d",&p);
        int c = randNum();
        if (p == 0)
        {
            break;
        }
        printf("\nComuter choose : %d\n",c);
        printf("You choose : %d\n\n",p);
        switch (p){
        case 1:
            if (c == 1){
                printf("The Match Is Draw\n");
            }
            if (c == 2){
                p_c += 1;
                printf("Computer Win !!! \t Computer's point %d\n",p_c);
            }
            if (c == 3){
                p_p += 1;
                printf("You Win !!! \t Your point is %d\n",p_p);
            }
            break;
        case 2:
            if (c == 1){
                p_p += 1;
                printf("You Win !!! \t Your point is %d\n",p_p);
            }
            if (c == 2){
                printf("The Match Is Draw\n");
            }
            if (c == 3){
                p_c += 1;
                printf("Computer Win !!! \t Computer's point %d\n",p_c);
            }
            break;
        case 3:
            if (c == 1){
                p_c += 1;
                printf("Computer Win !!! \t Computer's point %d\n",p_c);
            }
            if (c == 2){
                p_p += 1;
                printf("You Win !!! \t Your point is %d\n",p_p);
            }
            if (c == 3){
                printf("The Match Is Draw\n");
            }
            break;
        default:
            printf("!!!\tYou choose invalid nubmer\t!!!\n");
            break;
        }

    }
    printf("Your Point is : %d\n",p_p);
    printf("Computer's Point is : %d\n",p_c);
    if (p_p > p_c){
        printf("You Won The Series\n");
    }
    else if (p_p < p_c){
        printf("Computer Won The Series\n");
    }
    else
    {
        printf("The Series Is Draw\n");
    }
    return 0;
}
