#include "3-calc.h"
/**
* get_op_func - search symbol and return function
* @s: simbol to compare
* Return: return a function pointer
**/

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
