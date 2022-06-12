#include <stdio.h>

/**
 * main - numbers with commas
 *
 * Return: Always 0(Success)
 */
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar((x % 10) + '0');
putchar(',');
}
putchar('\n');
return (0);
}
