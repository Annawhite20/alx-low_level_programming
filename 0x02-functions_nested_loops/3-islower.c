#include "main.h"
/** 
* _islower - A program that checks for lowercase.
 * 
* @c: A parameter to check for lowercase
 * 
* Return: always 0
 */ 
int _islower(int c)
{	
if (c >= 97 && c <= 122)	
	return (1);
	else		
return (0);
}

#include "main.h"
 /** 
* _isalpha - program that check for alphabetic character
 *
 * @c: function parameter
 * 
* Return: 1 if letter or lower or upper othewise 0
 */
 int _isalpha(int c)
{	
if ((c >= 67 && c <= 99) || (c >= 90 && c <= 122))		
return (1);
	else		
return (0); 
}


