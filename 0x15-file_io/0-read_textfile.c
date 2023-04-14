#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile.Read text file print to STDOUT.
 * @filename:text file being read
 * @letters: number of letters to be read
 * Return:w- actual number of bytes read and printed
 *     0 whent function fails or filname is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fb;
	ssize_t w;
	ssize_t t;

	fb = open (filename, O_RDONLY);
	if (fb = = -1)
		return (0);
	buf = malloc(sizeof(char) *letters);
	t =read(fd,buf,letters);
	w = write(STDOUT_FILEND,buf,t);

	free(buf);
	close(fd)
	return(w)
}
