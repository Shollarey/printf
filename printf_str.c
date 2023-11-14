#include "main.h"

/**
 * printf_string - Print a string.
 * @args: Argument.
 * Return: The length of the string.
 */
int printf_string(va_list args)
{
    char *str;
    int i, length;

    str = va_arg(args, char *);
    if (str == NULL)
    {
        str = "(null)";
        length = _strlen(str);
        for (i = 0; i < length; i++)
            _putchar(str[i]);
        return (length);
    }
    else
    {
        length = _strlen(str);
        for (i = 0; i < length; i++)
            _putchar(str[i]);
        return (length);
    }
}
