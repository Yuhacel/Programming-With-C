#include <stdio.h>
#include <time.h>
#include <stdlib.h>


enum Move {LEFT, MIDDLE, RIGHT};

void printVal(int g){
    if (g == 0)
    {
        printf("Goalkeeper took the LEFT. \n");
    }
    else if(g == 1)
    {
        printf("Goalkeeper took the MIDDLE. \n");
    }
    else
    {
        printf("Goalkeeper took the RIGHT. \n");
    }
}

int main(){ 

    srand(time(NULL));

    int playerInput;            // Value    
    int goalKeeperValue;        // Value    
    int playerScore = 0 ;       // Score
    int goalKeeperScore = 0 ;   // Score

    goalKeeperValue = rand() % 3; 

    enum Move getGoalKeeperMove;

    printf("Welcome to penalty shootout. You will take the penalty and goalkeeper will try to save it. \n ");
    printf("To shoot left side, input 0 . \n ");
    printf("To shoot middle, input 1 . \n ");
    printf("To shoot right side, input 2 . \n ");
    printf("First one with 3 points will win the game \n ");


    while(playerScore < 3 && goalKeeperScore < 3)
    {
        printf("Select the side to shoot: left (0), middle (1), right (2) : ");
        scanf("%d",&playerInput);

        if( 0 <= playerInput && playerInput <= 2)
        {
            if(playerInput == goalKeeperValue)
            {
                ++goalKeeperScore;
                printf("Goalkeeper saved your shoot. \n");
                printf("Scoreboard: \n");
                printf("Player %d - %d Computer \n", playerScore, goalKeeperScore);
                printf("\n");

            }
            else
            {
                ++playerScore;
                printVal(goalKeeperValue);
                printf("Scoreboard: \n");
                printf("Player %d - %d Computer \n", playerScore, goalKeeperScore);
                printf("\n");
            }
        }
        else
        {
            printf("Your input is not valid ! \n");
            return 0;
        }

    }

    if(playerScore > goalKeeperScore)
    {
        printf("Game is over ! You won !\n");
    }
    else
    {
        printf("Game is over ! You lost !\n");
    }
    
  return 0;
}