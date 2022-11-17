#include "3-calc.h"
/**
 * main - program that perfoms simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*ptr_getop)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr_getop = get_op_func(argv[2]);
	if (ptr_getop == NULL || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr_getop(num1, num2));
	return (0);
}
