#include "main.h"
/**
 *_isdigit - function that verifies if a  character is a digit or not
 *@c: tested character
 *Return: returns 1 if it is uppercase , 0 if not
 */

/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
