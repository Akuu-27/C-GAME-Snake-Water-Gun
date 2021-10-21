#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char you,char comp)
{
    //returns if you win, -1 if you lose and 0 if you draw
    //draw
    if(you == comp)
    {
        return 0;
    }
    // non-draw condition
    if(you=='s' && comp=='g')
    {
        return -1;
    }
    else if(you=='g' && comp=='s')
    {
        return 1;
    }
    if(you=='w' && comp=='s')
    {
        return -1;
    }
    else if(you=='s' && comp=='w')
    {
        return 1;
    }
     if(you=='g' && comp=='s')
    {
        return 1;
    }
    else if(you=='s' && comp=='g')
    {
        return -1;
    }
}
int main()
{
    char you,comp,number;
    srand(time(0));
    number = rand()%100+1;
    if(number<33)
    {
        comp = 's';
    }
    else if(number>33 && number>66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result = snakewatergun(you,comp);
    printf("You choose %c and computer choose %c\n",you,comp);
    if(result == 0)
    {
        printf("Game draw!\n");
    }
    else if(result == 1)
    {
        printf("You Win!\n");
    }
    else
    {
        printf("You lose!\n");
    }

    return 0;
}
