#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

// Function to implement the game
int game(char you, char comp)
{

    // If both the user and the computer
    // choose the same thing
    if (you == comp)
    {
        return -1;
    }

    // If user chooses rock and the computer chooses paper
    else if (you == 'r' && comp == 'p')
    {
        return 0;
    }

    // If user chooses paper and the computer chooses rock
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }

    // If user chooses scissors and the computer chooses rock
    else if (you == 's' && comp == 'r')
    {
        return 0;
    }

    // If user chooses rock and the computer chooses scissors
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }

    // If user chooses scissors and the computer chooses paper
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }

    // If user chooses paper and the computer chooses scissors
    else
    {
        return 0;
    }
}

// Driver Code
int main()
{
    // Variables
    int n;
    char you;
    char comp;
    char result;

    // Random Guess generator
    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
    {
        comp = 'r';
    }
    else if (n > 33 && n < 66)
    {
        comp = 'p';
    }

    else
    {
        comp = 's';
    }

    // Input
    printf("Enter 'r' for rock, 'p' for paper, 's' for scissors: ");
    scanf("%c", &you);

    // Function Implementation
    result = game(you, comp);

    // Output
    if (result == -1)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("User Wins!\n");
    }
    else
    {
        printf("Computer Wins!\n");
    }

    printf("You chose : %c and Computer chose : %c", you, comp);

    return 0;
}