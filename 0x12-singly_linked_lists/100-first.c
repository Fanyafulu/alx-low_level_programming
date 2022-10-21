#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
* bmain function executed before main
* Return: no return.
*/

void hare(void)

{
printf("You're beat! and yet, you must allow")
printf(",\nI bore my house upon my back!\n");
}
