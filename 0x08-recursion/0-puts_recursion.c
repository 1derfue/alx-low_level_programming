#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion
 * @s: The string to be printed
 *
 * Description: This function prints the characters of a string one by one
 * recursively, and when it reaches the end of the string, it prints a new line.
 */
void _puts_recursion(char *s)
{
    /* Base case: Check if the current character is the null terminator */
   
       	if (*s == '\0')
    {
        _putchar('\n'); /* Print a new line using _putchar */
       
       	return; /* End the recursion */
    }

    _putchar(*s); /* Print the current character using _putchar */
    _puts_recursion(s + 1); /* Recursively call _puts_recursion with the next character in the string */
}
