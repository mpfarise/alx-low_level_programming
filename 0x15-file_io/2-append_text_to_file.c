#include "main.h"

/**
 * append_text_to_file - The appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to add at end of  file.
 *
 *  Return: If function fail or filename is NULL - -1
 *          If file does not exist the user lack write permission - -1.
 *          otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);

	return (1);
}
