#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int count;

	for (count = 0; s[count] != '\0'; ++count);
	return (count);
}