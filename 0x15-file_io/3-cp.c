#include "main.h"
#define BUFF_SIZE 1024

/**
 * cp - function to copy file to another file
 * @src: this is the source file
 * @dest: this is the destination file
 * Return: 1
 */
int cp(const char *src, const char *dest)
{
	ssize_t read_bytes, written_bytes;
	char *buffer[BUFF_SIZE];
	int src_fd, dest_fd;

	src_fd = open(src, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dest_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC,
	S_IWUSR | S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	while ((read_bytes = read(src_fd, buffer, BUFF_SIZE)) > 0)
	{
		written_bytes = write(dest_fd, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n", dest);
			close(dest_fd);
			close(src_fd);
			return (-1);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write fron file %s\n", src);
		exit(98);
	}
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", src_fd);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", dest_fd);
		exit(100);
	}
	close(src_fd);

	close(dest_fd);
	return (1);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	const char *src, *dest;
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = argv[1];
	dest = argv[2];

	result = cp(src, dest);
	if (result == 1)
	{
		printf("file copied successfully");

	}
	else
	{
		printf("file not copied successfully");
	}
	return (0);

}
