#include "main.h"
void print_alphabet(void);
/**
 *main - print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
return;
}
