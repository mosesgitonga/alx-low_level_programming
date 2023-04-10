#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: the filename to create
 * @text_content: content of filename
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *create;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	create = fopen(filename, "w+");
	if (create == NULL)
	{
		printf("Error in creating file");
		fclose(create);
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		fwrite(text_content, sizeof(char), len, create);
		return (1);
	}
	fclose(create);
	return (1);
}
