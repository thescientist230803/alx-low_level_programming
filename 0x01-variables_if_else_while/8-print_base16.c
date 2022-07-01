#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (success/correct)
 */
int main(void)
{
char base_16;
  
for (base_16 = 48; base_16 <= 57; base_16++)
{
putchar(base_16);
}
for (base_16 = 'a'; base_16 <= 'f'; base_16++)
{
putchar(base_16);
}
	
putchar('\n');
	
return (0);
	
}
