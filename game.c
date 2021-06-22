#include <stdio.h>
#include<conio.h>
int main ()
{
    
    //first we have to declare 3 variables
    int a,b,c ;
    //here  we have to greet the user
    printf("WELCOME TO THE GAME  \n\n");
    //in the next statement we have given user the options of rock paper sisor
    printf ("1 = ROCK\n2=PAPER\n3= sisor \n");
    //in the next statement we have ask user to selsect the choice 
    printf ("WHAT IS YOUR CHOICE ");
    scanf("%d", &a);
    //here if the ueser selects number 1 computer will choose the paper and computer will win the game
    if (a==1)
    {
        printf ("YOU SELECTED NUMBER 1 MEANS ROCK ");
        printf("\n COMPUTER SELECTD PAPER\n");
        printf ("COMPUTER IS WINNER \n");
    }
    //here if the ueser selects number 2 computer will choose the SESIOR and computer will win the game
    else if (a==2)
    {
        printf ("YOU SELECTED NUMBER 2 MEANS PAPER");
        printf ("\n COMPUTER SELECTED SESIOR");
        printf ("\n COMPUTER WON THE GAME");
    }
    //here if the ueser selects number 3 computer will choose the rockand computer will win the game
    else if (a==3)
    {
        printf ("YOU SELECTED NUMBER 3 MEANS SISOR");
        printf ("\n COMPUTER SELECTED ROCK");
        printf ("\n COMPUTER won the GAME");
    }
    //if user tyoes anything else it will show wrong output
    else 
    {
        printf (" WRONG INPUT");
    }
}