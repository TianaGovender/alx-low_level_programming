#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads text file and prints it
 * @filename: char
 * @letters: size
 * Return: size or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, sz, i;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}

	sz = read(file, buf, letters);
	if (sz == -1)
	{
		close(file);
		free(buf);
		return (0);
	}

	i = 0;
	while (i < sz)
	{
		if (write(STDOUT_FILENO, &buf[i], 1) == -1)
		{
			close(file);
			free(buf);
			return (0);
		}
		i++;
	}

	free(buf);
	close(file);
	return (sz);
}
