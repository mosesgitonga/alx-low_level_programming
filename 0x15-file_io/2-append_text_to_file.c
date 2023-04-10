#include "main.h"
#include <string.h>
/**
 * append_text_to_file - funtion to append text
 * @filename: the fil name
 * @text_content: content to append
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len;
	FILE *filepointer;

	if (!filename)
	{
		return (-1);
	}

	filepointer = fopen(filename, "a");
	if (!filepointer)
	{
		return (-1);
	}

	if (text_content)
	{
		len = strlen(text_content);
		fwrite(text_content, sizeof(char), len, filepointer);
		return (1);
	}
	fclose(filepointer);
	return (1);
}
