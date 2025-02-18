#include <cs50.h>
#include <stdio.h>

#define QUARTER 25
#define DIME 10
#define NICKLE 5
#define PENNY 1

// Prototype functions
int get_cents();
int calculate_coins(int dividend, int divisor);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents = get_cents();

    // Calculate how many quarters you should give customer
    int quarters = calculate_coins(cents, QUARTER);

    // Subtract the value of those quarters from cents
    cents -= (quarters * QUARTER);

    // Calculate how many dimes you should give customer
    int dimes = calculate_coins(cents, DIME);

    // Subtract the value of those dimes from remaining cents
    cents %= DIME;

    // Calculate how many nickels you should give customer
    int nickles = calculate_coins(cents, NICKLE);

    // Subtract the value of those nickels from remaining cents
    cents %= NICKLE;

    // Calculate how many pennies you should give customer
    int pennies = calculate_coins(cents, PENNY);

    // Subtract the value of those pennies from remaining cents;
    cents = cents - (pennies * PENNY); // cents equal 0

    // Sum the number of quarters, dimes, nickels, and pennies used
    int total_cents = quarters + dimes + nickles + pennies;

    // Print that sum
    printf("%i\n", total_cents);
}
// ------------ FUNCTIONS -----------------------------------------
// Prompt the user for change owed, in cents
int get_cents()
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

// Calculate how many quarters you should give customer
int calculate_coins(int dividend, int divisor)
{
    return dividend / divisor;
}
