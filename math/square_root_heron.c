#include <stdio.h>
/**
 * square_root_heron - Executes square root including double numbers.
 * @root: Square root number to calculate.
 *
 * Return: The result of the square root or -1 if it fails.
 */

double square_root_heron(double root)
{
	double x0 = 1;
	if(root < 0)
	{
		printf("The number entered is incorrect because it's negative\n");
		return(-1);
	}
	while(x0 * x0 != root)
		x0 = (0.5)*(x0 + (root / x0));
	return (x0);
}
