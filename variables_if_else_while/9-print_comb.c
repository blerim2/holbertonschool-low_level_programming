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

for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');


return (0);

}
