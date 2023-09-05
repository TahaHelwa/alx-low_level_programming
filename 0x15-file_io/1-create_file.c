#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, text_size);
		if (written_bytes == -1 || written_bytes != text_size)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
