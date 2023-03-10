#include "main.h"
#include <stdio.h>
/**
 * main - program to print first argument
 * @argc:something to prevent error
 * @argv:vector to print
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", argc);
	}
	printf("%s\n", argv[0]);
	return (0);
}
