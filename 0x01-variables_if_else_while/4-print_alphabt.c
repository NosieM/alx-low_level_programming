#include <stdio.h>

/**
 * main - Print alphabt
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 'a';

for (x = 'a'; x <= 'z' ; x++)
{
if ((x != 'e') && (x != 'q'))
putchar(x);
}
putchar('\n');
return (0);
}
