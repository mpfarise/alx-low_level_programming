#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append a text at the end of  file.
 * @text_content: string to add to the end file.
 * @filename: pointer to name of the file.
 *
 * Return: if function fails or filename is NULL - -1.
 *         if file do not exist the user lacks write permission - -1.
 *         otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o = 0;
	int write_status = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	write_status = write(o, text_content, len);
	if (write_status == -1)
		return (-1);

	close(o);

	return (1);
}
