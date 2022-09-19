#include "main.h"

/**
* swap_int - writes a function that swaps the value of two ints.
* @a:variable pointer at a
* @b: variable pointer at b
*/

void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
