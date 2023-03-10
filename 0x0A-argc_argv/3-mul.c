#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int arg1, arg2;



	if (argv[0] == NULL)
	{
		printf("is enpty p");
	}
	for (i = 0; i <= argc; i++)
	{
		if (argc > 3 || argc < 2)
		{
			printf("Error\n");
			return (1);
		}
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		printf("%d\n", arg1 * arg2);
		return (0);
	}
	return (0);
}
