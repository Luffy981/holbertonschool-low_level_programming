#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_EXCL);
	if (fd == -1)
		return (-1);
	while (text_content[count] != '\0')
		count++;
	if (text_content != NULL)
		write(fd, text_content,count);
	close(fd);
	return(1);
}
