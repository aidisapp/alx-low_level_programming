#include "main.h"
#include <stdio.h>

/**
 * cap_string - this is the main block or the Entry point
 *
 * Description: this capitalizes all words of a string
 *
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int count_them = 0, i;
	int sep_of_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count_them) >= 97 && *(s + count_them) <= 122)
		*(s + count_them) = *(s + count_them) - 32;
	count_them++;
	while (*(s + count_them) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count_them) == sep_of_words[i])
			{
				if ((*(s + (count_them + 1)) >= 97) && (*(s + (count_them + 1)) <= 122))
					*(s + (count_them + 1)) = *(s + (count_them + 1)) - 32;
				break;
			}
		}
		count_them++;
	}
	return (s);
}
