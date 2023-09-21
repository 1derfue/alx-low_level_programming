#include "main.h"

/**
 * _strcat - Concatenate two strings and overwrite the null terminator.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Copy characters from src to dest */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add a new null-terminator at the end */
	dest[dest_len + i] = '\0';

	return dest;
}
