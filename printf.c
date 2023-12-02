#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _print :input caracter and retutn strind 
 * @format:fromat string ,char
 * Return : const
 *  
*/
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            count += _putchar(format[i]);
        }
        else
        {
            if (format[i + 1] == '\0') 

            switch (format[i + 1])
            {
                case 'c':
                    count += _putchar(va_arg(args, int));
                    break;
                case 's':
                    count += _print_string(va_arg(args, char *));
                    break;
                case '%':
                    count += _putchar('%');
                    break;
                default:
                    break;
            }

            i++; 
        }

    }va_end(args);

    return count;
}
