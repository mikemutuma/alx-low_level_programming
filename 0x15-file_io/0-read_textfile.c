#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this function reads the text
 * @filename: this is the text
 * @letters: amount of letters
 * Return: w- amount of bytes
 *        0 when function has an error or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t aa;
	ssize_t b;
	ssize_t c;

	aa = open(filename, O_RDONLY);
	if (aa == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(aa, buf, letters);
	b = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(aa);
	return (b);
}
