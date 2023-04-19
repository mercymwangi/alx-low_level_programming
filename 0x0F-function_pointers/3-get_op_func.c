#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - chooses the correct function to perform an operation
 * @s: the operator passed as arg
 * Return: A pointer to the function corresponding to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;
	return (ops[j].f);
}
