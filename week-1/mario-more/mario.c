#include <cs50.h>
#include <stdio.h>

#define ESPACE_BETWEEN_PYRAMIDS 2

// Prototype functions
int get_height();
void print_row(int spaces, int bricks, int spaces2, int bricks2);

int main()
{
    int height = get_height();

    for (int i = 0; i < height; i++)
    {
        int spaces = height - i - 1;
        int bricks = i + 1;
        int spaces2 = 1;
        int bricks2 = i + 1;
        print_row(spaces, bricks, spaces2, bricks2);
    }
}

int get_height()
{
    int height;
    do
    {
        height = get_int("Number of rows: "); // Número de filas
    }
    while (height <= 0 || height > 8);
    return (height);
}

void print_row(int spaces, int bricks, int spaces2, int bricks2)
{
    // Imprimir espacios
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // Imprimir #
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    //imprimir espacios de en medio
    for (int k = 0; k < spaces2; k++)
    {
        printf("  ");
    }
    //Imprimir ladrillos derecha
    for (int l = 0; l < bricks2; l++)
    {
        printf("#");
    }
    printf("\n"); // Nueva línea

}
