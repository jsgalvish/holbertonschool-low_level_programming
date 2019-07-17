#include <stdio.h>
#include <stdlib.h>
/**
*argstostr - concatenates all the arguments
*@ac: first variable
*@av: pointer to pointer
*Return: all the args concatenated
*/
char *argstostr(int ac, char **av)
{

	int cont, cont2, cont3, cont4, cont5;
	char *buf;
	char *sec;

	cont3 = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (cont = 0; cont < ac; cont++)
	{
		for (cont2 = 0; av[cont][cont2] != 0; cont2++)
			cont3++;
		cont3++;
	}
	cont3 += 1;

	buf = malloc(cont3 * sizeof(char));
	sec = buf;

	if (buf == NULL)
		return (NULL);

	for (cont4 = 0; cont4 < ac; cont4++)
	{
		for (cont5 = 0; av[cont4][cont5] != 0; cont5++)
		{
			*buf = av[cont4][cont5];
			buf++;
		}

	*buf = '\n';
	buf++;
	}
	return (sec);
}
