#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
* first - Prints a string before the main function executed.
* Return: void.
*/

void hare(void)
{
printf("You're beat! and yet, you must allow,\n" "I bore my house upon my back!\n");
}
