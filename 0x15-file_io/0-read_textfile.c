#include <main.h>
#include <stdio.h
>
/**
 * read_textfile.Read text file print to STDOUT.
 * @filename:text file being read
 * @letters: number of letters to be read
 * Return:w- actual number of bytes read and printed
 *     0 whent function fails or filname is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letter)
{
	int fp; /*fle descriptor*/
	int readd; /*no. of bytes read*/
	int written; /*no. of bytes printed*/
	char *buffer; /*temp stores data to read*/

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	readd = read(fp, buffer, letters);
	if (readd == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[readd] = '\0';
	close(fp);
	written = write(STDOUT_FILENO, buffer, readd);
	if (written == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (written);
}
