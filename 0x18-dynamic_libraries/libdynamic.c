#include "main.h"
#include <stdio.h>
#include <unistd.h>
int _putchar(char c) {
    return write(1, &c, 1);
}

#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    while (s[length] != '\0')
        length++;

    return length;
}
