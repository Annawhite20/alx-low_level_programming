#include <stdio.h>
void __attribute__((constructor)) print(void);

/**
 * print - prints befotre main function
 * Return: nothing
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
