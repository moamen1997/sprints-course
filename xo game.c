#include <stdio.h>

char matrix[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // the square's numbers
char player1[16];  //variable to hold player 1's name
char player2[16];  //variable to hold player 2's name
char choose[20], mark;   //the input, X/O
int state = 1, playerSelec = 1, gameStart = 1, winner = 0, gameRunning = 1; //true or false guides

int i;

void table();      //declaring the squares design's function
void selecCheck(); //function to check if the validity of the input
void winCheck();   //function to check if a player is won

int main()
{
    printf("\t\tWELCOME TO X/O GAME\n\teach player give himself a name\n\nPLAYER 1:");  //greeting
    scanf("%s", &player1);   //getting the player 1's name
    printf("player 2 :");
    scanf("%s", &player2);   //getting the player 2's name

    table();     //initializing the table

    do
    {
        gets(&choose);      //user square's selection
        (playerSelec == 1)? (mark = 'X'): (mark = 'O');
        selecCheck();
        winCheck();
    }while(gameRunning == 1);

    table();
    return 0;
}


void selecCheck()
{
    switch(choose[0])
    {
    case('1'):
        if(matrix[0] == choose[0])
        {
            matrix[0] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;
    case('2'):
        if(matrix[1] == choose[0])
        {
            matrix[1] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;

    case('3'):
        if(matrix[2] == choose[0])
        {
            matrix[2] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;

    case('4'):
        if(matrix[3] == choose[0])
        {
            matrix[3] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;

    case('5'):
        if(matrix[4] == choose[0])
        {
            matrix[4] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        break;
    case('6'):
        if(matrix[5] == choose[0])
        {
            matrix[5] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;

    case('7'):
        if(matrix[6] == choose[0])
        {
            matrix[6] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;

    case('8'):
        if(matrix[7] == choose[0])
        {
            matrix[7] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;

    case('9'):
        if(matrix[8] == choose[0])
        {
            matrix[8] = mark;
            state = 1;
            (playerSelec == 1 && gameStart == 1)? (playerSelec = 2) : (playerSelec = 1);
        }
        else
        {
            state = 0;
        }
        break;

    default:
        table();
        break;
    }

}

void winCheck()
{
    if(matrix[0] == matrix[1] && matrix[0] == matrix[2])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else if(matrix[3] == matrix[4] && matrix[3] == matrix[5])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else if(matrix[6] == matrix[7] && matrix[6] == matrix[8])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else if(matrix[0] == matrix[3] && matrix[0] == matrix[6])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else if(matrix[1] == matrix[4] && matrix[1] == matrix[7])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else if(matrix[2] == matrix[5] && matrix[2] == matrix[8])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else if(matrix[0] == matrix[4] && matrix[0] == matrix[8])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else if(matrix[2] == matrix[4] && matrix[2] == matrix[6])
    {
        (playerSelec == 1)? (winner = 2):(winner = 1);
    }
    else
    {
        for(i = 0; i <= 9; i++)
        {
            ((matrix[i] != 'X' ) || (matrix[i] != 'O'))? (gameRunning = 1):(gameRunning = 0);
        }
    }
}
void table()
{
    system("cls");
    printf("\n\t%s\t\t%s\n\t( X )\t\t( O )\n\n", player1, player2);
    printf("\t       |       |       \n\t   %c   |   %c   |   %c   \n\t_______|_______|_______\n", matrix[0], matrix[1], matrix[2]);
    printf("\t       |       |       \n\t   %c   |   %c   |   %c   \n\t_______|_______|_______\n", matrix[3], matrix[4], matrix[5]);
    printf("\t       |       |       \n\t   %c   |   %c   |   %c   \n\t       |       |       \n\n\n", matrix[6], matrix[7], matrix[8]);

    if (winner == 1)
    {
        printf("\n\n\t\tTHE WINNER IS ( %s )\n\n\n", player1);
        gameRunning = 0;
    }
    if (winner == 2)
    {
        printf("\n\n\t\tTHE WINNER IS ( %s )\n\n\n", player2);
        gameRunning = 0;
    }
    if(state == 1 && gameRunning == 1)
    {
        printf("choose the square number: ");
    }
    if(state == 0 && gameRunning == 1)
    {
        printf("PLEASE choose a correct square: ");
    }

}
