#include "100-calcfunctions.h"

/**
 * add - This function adds two numbers
 * @a: Is the first number
 * @b: Is the second number
 * Return: Their sum
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - This function subtracts two numbers
 * @a: Is the first number
 * @b: Is the second number
 * Return: Their difference
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - This function multiply two numbers
 * @a: Is the first number
 * @b: Is the second number
 * Return: Their product
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - This function divide two numbers
 * @a: Is the first number
 * @b: Is the second number
 * Return: Their quotient
 */
int div(int a, int b)
{
    if (b != 0)
        return (a / b);
    else
        return (0); /* Return 0 if the denominator is 0 */
}
/**
 * mod - This function perform modulus operation of two numbers
 * @a: Is the first number
 * @b: Is the second number
 *
 * Return: Their remainder after division
 */
int mod(int a, int b)
{
    if (b != 0)
        return (a % b);
    printf("Error: Division by zero\n");
    return (0); /* Return 0 if the denominator is 0 */
}