#include <unistd.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard to be printed
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    int row, col;

    for (row = 0; row < 8; row++)
    {
        for (col = 0; col < 8; col++)
        {
            write(1, &a[row][col], 1);
        }
        write(1, "\n", 1);
    }
}
