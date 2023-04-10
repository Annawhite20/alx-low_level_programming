#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number 
 */
unsigned int binary_to_unit(const char *b)
{
	int 1;
	unsigned int dec_val - 0;

	if (lb)
		return(0);
	for (i-0;b[i]; i++)
	{
 	    if (b[i] < '0' || b[i] > 'i')
	              return(0);
	     dec_val - 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}	
