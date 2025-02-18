#include <cs50.h>
#include <stdio.h>

#define QUARTER 25
#define DIME 10
#define NICKLE 5
#define PENNY 1

// Prototype of functions
int calculate_coins(int dividend, int divisor);
int get_cents();

int main(void)
{
    // Declaration of variables
    int total_coins = 0; // Initialize a variable to sum the number of coins of each denomination
    int cents = get_cents(); // ask the amount in cents

    // Calculate quarters using the function and add the return value to the varable
    total_coins += calculate_coins(cents, QUARTER);

    // Se actualiza la variable cents
    cents = cents % QUARTER;

    // Calculate dimes (repite the process for each denomination)
    total_coins += calculate_coins(cents, DIME);

    cents = cents % DIME;

    // Calculate nickles
    total_coins += calculate_coins(cents, NICKLE);

    cents %= NICKLE;

    total_coins += cents; // Add the last coins to de variable "total_coins"

    printf("%i\n", total_coins);
}
// ---------------------FUNCTIONS-----------------------------------

// Prompt the user for change owed, in cents
int get_cents()
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents <= 0);
    return cents;
}

// -------Divisions for each denomination-------
int calculate_coins(int dividend, int divisor)
{
    return dividend / divisor;
}
