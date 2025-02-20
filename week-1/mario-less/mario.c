#include <cs50.h>
#include <stdio.h>

// Prototype functions
int get_height(void);
void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height = get_height();

    // Print a pyramid of that height
     for (int i = 0; i < height; i++)
     {
        // declare variables to use them in the function
        int spaces = height - i - 1;
        int bricks = i + 1;
        print_row(spaces, bricks); // call the function
    }
 }

// ---------- FUNCTIONS -------------------

// Prompt the user for the pyramid's height
int get_height(void)
{
    int n = 0;
    do
    {
        n = get_int("What's the height? ");
    }
    while(n < 1);
    return n;
}

// Print row of bricks
void print_row(int spaces, int bricks)
{
    // Print spaces
    for(int j = 0; j < spaces; j++)
    {
        printf(" ");
    }

    // Print bricks
    for(int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

