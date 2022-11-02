#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: file name to read
 *@letters: number of letters to print
 *
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t sz, i = 0;

	char *c = (char *)malloc(sizeof(char) * (letters + 1));

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	if (filename == NULL)
		return (0);
	sz = read(fd, c, letters);
	c[sz] = '\0';
	while (i < sz)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (i);

}
