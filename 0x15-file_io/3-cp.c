#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int sz, sy;
	int fd1, fd2;
	char *c;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s cp file_from file_to\n", av[0]);
		exit(97);
	}
	fd1 = open(av[2], O_RDWR | O_TRUNC);
	if (fd1 < 1)
		fd1 = open(av[2], O_RDWR | O_CREAT, 0674);
	if (fd1 < 1)
	{
		dprintf(2, "Error: Can't create from %s \n", av[2]);
		exit(99);
	}
	c = (char *) malloc(sizeof(char) * 1024);
	fd2 = open(av[1], O_RDONLY);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't read from %s \n", av[1]);
		exit(98);
	}
	else
	{
		sz = read(fd2, c, 1024);
	}
	if (sz < 0)
	{
		dprintf(2, "Error: Can't read from %s \n", av[1]);
		exit(98);
	}
	sy = write(fd1, c, sz);
	if (sy < 0)
	{
		dprintf(2, "Error: Can't write to %s \n", av[2]);
		exit(99);
	}
	if (close(fd1) < 0)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE %d\n", fd2);
		exit(100);
	}
	return (0);
}
