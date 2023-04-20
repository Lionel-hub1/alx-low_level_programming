#include "3-calc.h"

/**
 * get_op_func - This function selects the correct operation asked by the user
 * @s: The operation to perform
 * Return: A pointer to the function corresponding to the operations done
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
	int i;

	for (i = 0; ops[i].op && *(ops[i].op) != *s; i++)
		;

	return (ops[i].f);
}
