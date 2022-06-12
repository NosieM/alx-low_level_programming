#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 10)
{
_putchar(x);
_putchar('\n');
}
}
return;
}
