#include "main.h"
#define BUFF_SIZE 4096
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
		perror("unable to open source file");
		return (-1);
	}
	dest_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC,
	S_IWUSR | S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (dest_fd == -1)
	{
		perror("unable to open destination file");
		return (-1);
	}
	while ((read_bytes = read(src_fd, buffer, BUFF_SIZE)) > 0)
	{
		written_bytes = write(dest_fd, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			perror("unable to write to destination file");
			close(dest_fd);
			close(src_fd);
			return (-1);
		}
	}
	if (read_bytes == -1)
	{
		perror("unable to read source file");
		return (-1);
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
		printf("%s src dest", argv[0]);
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
