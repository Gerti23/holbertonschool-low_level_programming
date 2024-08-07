#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 * @s: operator passed as an argument to the program
 * Return: a pointer to the function that corresponds to the operator
 * given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
