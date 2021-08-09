#include "main.h"
/**
 * create_file - function reads a text file and prints it to the POSIX
 * @filename:  Number to evaluate
 * @text_content: Index
 * Return: Return count
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;

	fd = open(filename, O_CREAT | O_WRONLY | O_EXCL | O_TRUNC, 600);
	if (fd == -1 || filename == NULL)
		return (-1);
	while (text_content[count] != '\0')
		count++;
	write(fd, text_content, count);
	close(fd);
	return (1);
}
