#include "function_pointers.h"

/**
 * print_name - This function prints the name of a person from argument
 * @name: The name to print
 * @f: The function to print it
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/*If there is no adress in arguments, quit*/
	if (!name || !f)
		return;

	f(name);
}
