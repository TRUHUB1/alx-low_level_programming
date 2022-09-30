#include "main.h"

/**
 * _isupper - a function that checks upper case
 * @c: an integer parameter
 * Return: 1 if it is, 0 if not
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);

        return (0);
}
