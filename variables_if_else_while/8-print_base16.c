#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
int a;
char letter;

for (a = 0; a < 10; a++)
putchar(a + '0');
for (letter = 'a'; letter < 'g'; letter++)
putchar (letter);
putchar('\n');


return (0);

}
