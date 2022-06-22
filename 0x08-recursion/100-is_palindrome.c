#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int _strlen_recursion(char *s);
int find_pali(char *s, int i, int len);

/**
 * is_palindrome - finds out if string is the same read front and back
 * @s: char
 * Return: int 1 if pali 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (find_pali(s, 0, _strlen_recursion(s)));
}

/**
 * find_pali - checks if string is readable both back anf front wards
 * @s: char
 * @i: int
 * @len: int
 * Return: int 1 if pali and 0 if not
 */

int find_pali(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);

	return (find_pali(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - gets string len
 * @s: char
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
