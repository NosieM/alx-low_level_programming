#include "main.h"
void print_numers();
/**
 * Main - Print numbers
 *
 * Return: Always 0
 */
void print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
return (0);
}
