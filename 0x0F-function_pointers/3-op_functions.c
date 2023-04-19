#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: first num
 * @b: second num
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference between two numbers
 * @a: first num
 * @b: second num
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two numbers
 * @a: first num
 * @b: second num
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - retuns division of two numbers
 * @a: first num
 * @b: second num
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of division of two numbers
 * @a: first num
 * @b: second num
 * Return: the remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
