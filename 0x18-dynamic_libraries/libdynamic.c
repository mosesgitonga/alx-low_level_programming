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

/**
 * _strncpy - copies src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 * @n: range
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i]  != '\0'; i++)
        {
                dest[i] = src[i];

        }
        for (; i < n; i++)
        {
                dest[i] = '\0';
        }
        return (dest);
}
/**
 * _isupper - chacks if number is upper
 *
 * @c: input
 * Return: 0 or 1
 */
int _isupper(int c)
{
        if (isupper(c))
        {
                return (1);
        }
        return (0);
}
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string being concatenated
 * Return: char string
 */
char *_strcat(char *dest, char *src)
{
        return (strcat(dest, src));

}
int _atoi(char *s)
{
        int i = 0, res = 0, sign = 1;
        while (s[i])
        {
                if (s[i] == '-')
                {
                        sign =sign* -1;
                }
                else if (s[i] <= 0 && s[i] >= 9)
                {
                        res = res * 10 + s[i] - '0';
                }
        /**     else if (res > 0)
        *       {
        *       break;
        *       }
*/      }
        return (res * sign);

}
/**
 * _strncat - concatenatinatin strings
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dst
 */
char *_strncat(char *dest, char *src, int n)
{
        int i;
        int dest_len = strlen(dest);

        for (i = 0; i < n; i++)
        {
                dest[dest_len + i] = src[i];
        }
        dest[dest_len + i] = '\0';
        return (dest);

}
/**
 * _islower - Entry point
 * @c: c character
 *
 *
 * Return: Always 0 (succes)
 */
int _islower(int c)
{
        if (c >= 97 && c <= 122)
        {
                return (1);
        }
        return (0);
}
/**
 * _puts - prints string with a new line
 * @str: pointer
 */
void _puts(char *str)
{
        puts(str);
}
unsigned int _strspn(char *s, char *accept)
{
        unsigned int count = 0;
        int found = 0;
        int i, j;

        for (i = 0; i != '\0'; i++)
        {
                found = 0;

                for (j = 0; j != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                count++;
                                found = 1;
                                break;
                        }
                }
                return (count);
        }

}
/**
 * _isalpha - checks if lower or
 * uppercase
 *
 * @c: now is defined
 * Return: 0
 */
int _isalpha(int c)
{
        if (c >= 65 && c <= 90)
        {
                return (1);
        }
        else if (c >= 97 && c <= 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        return (0);
}
/**
 *  _abs - finds absolute value
 * @r: helps to do magic
 *  Return: 0
 */
int _abs(int r)
{
        if (r < 0)
        {
                int abs;

                abs = r * -1;
                return (abs);
        }
        return (r);
}
/**
 * puts2 - prints even numbers
 * @str: input
 */
void puts2(char *str)
{
        int i;
        int length = strlen(str);

        for (i = 0; i <= length - 1; i += 2)
        {
                while (str[i] != '\0')
                {
                        _putchar(str[i]);
                        i += 2;
                }
                _putchar('\n');
        }

}
/**
* _strpbrk - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

/**
*_memcpy - a function that copies memory area
*@dest: memory where is stored
*@src: memory where is copied
*@n: number of bytes
*
*Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

char *_memset(char *s, char b, unsigned int n)
{
    return memset(s, b, n);
}
/**
* _isdigit - checks for a digit (0 through 9)
* @c: int to be checked
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
*_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
/**
* _strcmp - compare string values
* @s1: input value
* @s2: input value
*
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/**
* _strchr - Entry point
* @s: input
* @c: input
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

