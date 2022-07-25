#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: char
 * @text_content: String
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;
	
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	i = 0;
	while (text_content[i] != '\0')
	{
		if (write(file, &text_content[i], 1) == -1)
		{
			close(file);
			return (-1);
		}
		i++;
	}
	close(file);
	return (1);
}
