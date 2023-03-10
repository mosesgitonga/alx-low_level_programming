#include "main.h"
#include <stdio.h>
int main(int argc,char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", argc);
	}
	printf("%s\n", argv[0]);
	return (0);
}
