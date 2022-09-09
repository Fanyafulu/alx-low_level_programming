#include <stdio.h>
#include <ctype.h>

/**
* main - print alphabet in lowercase
* you can only use the putchar
* Return: Always 0.
*/
int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
