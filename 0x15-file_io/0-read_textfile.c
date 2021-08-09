#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t POSIX;
	POSIX = open("Requiescat", O_RDONLY);
	if(POSIX == -1)
		return(0);
	if(filename == NULL)
	{
		return(0);
	}
	write(POSIX,filename, letters);
	close(POSIX);
	/*POSIX = open("Requiescat", O_RDONLY);
	if(POSIX == -1)
	{
		return(0);
	}
	read(POSIX,*filename,letters);
	close(POSIX);*/
	return(POSIX);
}
