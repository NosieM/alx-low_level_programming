#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
while (num1 < 10)
putchar((num1 % 10) + '0');
num1++;
putchar('\n');
return (0);
}
