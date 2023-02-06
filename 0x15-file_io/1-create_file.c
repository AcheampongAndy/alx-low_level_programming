#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *(s + x) != '\0'; x++)
		;
	return (x);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len;
	ssize_t bytes_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		len = 0;
		text_content = "";
	}
	else
		len = _strlen(text_content);

	bytes_w = write(fd, text_content, len);
	if (bytes_w == -1)
		return (-1);

	close(fd);
	return (1);
}
