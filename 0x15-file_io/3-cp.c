#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Helper function to print error messages and exit with the provided code
 * @message: The error message to print
 * @code: The exit code
 */
void error_exit(char *message, int code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, otherwise the exit code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
		error_exit("Error: Can't write to file", 99);

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
			error_exit("Error: Can't write to file", 99);
	}

	if (read_bytes == -1)
		error_exit("Error: Can't read from file", 98);

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd", 100);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd", 100);

	return (0);
}
