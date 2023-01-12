#include <stdio.h>

/*#define abs_bitwise(n) ((n + (n >> 31)) ^ (n >> 31))*/

/**
 * abs_bitwise - Bitwise absolute value
 * @n: Number to evaluate
 *
 * Return: Absolute value
 */
int abs_bitwise(int n)
{
	return (((n + (n >> 31)) ^ (n >> 31)));
}
