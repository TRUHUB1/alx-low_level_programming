#include "main.h"

/**
 * _isalpha - checks alphabetic character
 * @c: int used for function argument
 * Return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
