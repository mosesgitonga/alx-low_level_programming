#include "main.h"
/**
 * read_textfile - read a text file
 * @filename: the filename to be read
 * @letters: number of letters;
 * Return: written bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int  filedesc;
	ssize_t read_b, written_b;

	if (!filename)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		return (0);
	}

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
	{
		return (0);
	}

	read_b = read(filedesc, buffer, letters);
	if (read_b == -1)
	{
		free(buffer);
		close(filedesc);
		return (0);
	}

	written_b = write(STDOUT_FILENO, buffer, read_b);
	if (written_b == -1 || written_b !=  read_b)
	{
		return (0);

	}
	free(buffer);
	close(filedesc);

	return (written_b);

}
