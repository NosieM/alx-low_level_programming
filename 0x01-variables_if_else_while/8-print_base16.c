#include <stdio.h>

/**
 * main - numbers of base 16
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int x;
int y;

for (x = 0; x < 10; x++)
putchar((x % 10) + '0');
for (y = 'a'; y <= 'f'; y++)
putchar(y);
putchar('\n');
return (0);
}
