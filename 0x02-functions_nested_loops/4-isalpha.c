#include "main.h"

/**
 * _isalpha - checks f c is lower or uppercase letter
 * @c: int used for function argument
 *
 * Return: 0
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
