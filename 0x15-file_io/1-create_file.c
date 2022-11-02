#include <stdio.h>
#include "main.h"
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - creates a file.
 *@filename: name of file to create
 *@text_content: is a NULL terminated string to write to the file
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
		if (fd == -1)
			return (-1);
		sz = write(fd, text_content, strlen(text_content));
		if (sz == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
		if (fd == -1)
			return (-1);
		sz = write(fd, text_content, strlen(text_content));
		if (sz == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
