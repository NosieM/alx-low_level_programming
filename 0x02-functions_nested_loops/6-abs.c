#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int _abs(int y)
{
int x = 1;
int r = x * y;
if (y < 0)
{
_putchar(r);
}
else if (x >= 0)
{
_putchar(r);
}
return (0);
}
