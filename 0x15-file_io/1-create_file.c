#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates file
 * @filename: char
 * @text_content: char
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (file < 0)
	{
		if (errno == EEXIST)
		{
			file = open(filename, O_WRONLY | O_TRUNC);
			if (file == -1)
				return (-1);
		}
		else
			return (-1);
	}

	i = 0;
	while (text_content[i] != '\0')
	{
		if (write(file, &text_content[i], 1) == -1)
			return (-1);
		i++;
	}

	close(file);
	return (1);
}
