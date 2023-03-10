#include <stdio.h>
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */



int main(int argc, char **argv)
{
	if (argv[0] == NULL)
	{
		return (1);
	}

	printf("%d\n", argc - 1);
	return (0);
}
