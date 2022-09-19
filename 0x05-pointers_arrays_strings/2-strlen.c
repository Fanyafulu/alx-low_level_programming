#include "main.h"

/**
* _strlen - Returns the length of a string.
* @str: The string to get the length of.
* Return: int
*/

int _strlen(char *s)
{
int count = 0;
while (s[count] !='\0')
{
count++;
}
return (count);
}
