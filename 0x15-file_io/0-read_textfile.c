#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: if success return number of letter, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_r, bytes_w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	bytes_r = read(fd, buffer, letters);
	if (bytes_r == -1)
		return (0);

	buffer[letters + 1] = '\0';
	close(fd);

	bytes_w = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_w == -1)
		return (0);

	free(buffer);

	return (bytes_read);
}
