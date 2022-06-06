#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long int li;
long long int ll;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int :%lu bytes(s)\n", sizeof(i));
printf("Size of long int: %lu byte(s)\n", sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("Size of a float: %lu byte(s)\n", sizeof(f));

return (0);
}
