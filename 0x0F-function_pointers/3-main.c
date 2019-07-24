#include "3-calc.h"
/**
* main - take 2 numbers and a symbol, make the operation
* @argc: size of input
* @argv: input arry
* Return: 0 succes - 98 Error
**/
int main(int argc, char *argv[])
{
	int result;
	int (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	fn = get_op_func(argv[2]);

	result = fn(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
