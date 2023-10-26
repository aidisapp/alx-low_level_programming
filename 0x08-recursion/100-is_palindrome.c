#include "main.h"
#include <stdio.h>

/**
 * _strlength_recursion - this is the main block
 *
 * Description: this function returns the length of a string
 *
 * @s: this represents the string
 *
 * Return: this should return the length of a string
 */

int _strlength_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlength_recursion(s + 1));
	return (0);
}

/**
 * checker - this is the Entry point
 *
 * Description: this function compares each character of the string
 *
 * @s: string
 *
 * @num1: smallest iterator
 *
 * @num2: biggest iterator
 *
 * Return: .
 */

int checker(char *s, int num1, int num2)
{
	if (s[num1] == s[num2])
	{
		if (num1 > num2 / 2)
		{
			return (1);
		}
		else
			return (checker(s, num1 + 1, num2 - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - this is the main block
 *
 * Description: this function detects if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if s is a palindrome, otherwise it is zero
 */

int is_palindrome(char *s)
{
	return (checker(s, 0, _strlength_recursion(s) - 1));
}
