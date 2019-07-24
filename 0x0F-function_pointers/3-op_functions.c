#include "3-calc.h"

/**
* op_add - + operation
* @a: 1st number
* @b: 2nd number
* Return: a + b
**/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - (-) operation
* @a: 1st number
* @b: 2nd number
* Return: a - b
**/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - * operation
* @a: 1st number
* @b: 2nd number
* Return: a * b
**/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - / operation
* @a: 1st number
* @b: 2nd number
* Return: a / b
**/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - % operation
* @a: 1st number
* @b: 2nd number
* Return: a % b
**/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
