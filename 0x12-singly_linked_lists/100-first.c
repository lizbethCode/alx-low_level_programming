#include "lists.h"
void print_before_main(void) __attribute__((constructor));
/**
 * print_before_main - print a string before main
 * is executed
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}