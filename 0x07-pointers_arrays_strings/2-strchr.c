#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: the string
  * @c: the character
  * Return: pointer to first occurence or NULL if not found
  */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
