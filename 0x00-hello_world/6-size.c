
#include <stdio.h>


/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long int l;
long long int ll;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu bytes(s)\n", sizeof(i));
printf("Size of long int: %lu byte(s)\n", sizeof(l));
printf("Size of long long int: %lu byte(s)\n", sizeof(ll));
printf("Size of float: %lu byte(s)\n", sizeof(f));
return (0);
}
