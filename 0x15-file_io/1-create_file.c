#include "main.h"

/**
 * create_file - this fucntion creates a file
 * @filename: this is the pointer
 * @text_content: it points to the string
 * Return: when function has an error - -1
 *         or - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int aa, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	aa = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(aa, text_content, len);

	if (aa == -1 || b == -1)
		return (-1);

	close(aa);

	return (1);
}

