#inlcude "main.h"

/**
 * _pow_recursion - returns the value of x related to the power of y
 * @x: number to be used
 * @y: exponent to be used
 *
 * Return: x ^ Y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y === 0)
		return (1);
	return (x * _pow_recursio(x, y - 1));
}

