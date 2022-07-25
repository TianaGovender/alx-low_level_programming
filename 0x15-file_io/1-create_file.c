#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates file
 * @filename: char
 * @text_content: char
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, sz, i;
	char *buf;

	if (filename == NULL)
		return (-1);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	file = open(filename, O_CREAT | O_);
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
