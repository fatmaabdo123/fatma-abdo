#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Printf function
 * @format: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    if (format == NULL)
        return -1;

    va_list args;
    va_start(args, format);

    int printed_chars = 0;

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            printed_chars++;
        }
        else
        {
            i++; /* Move to the next character after '%'*/
            switch (format[i])
            {
            case 'c':
                putchar(va_arg(args, int));
                printed_chars++;
                break;
            case 's':
                printed_chars += printf("%s", va_arg(args, char *));
                break;
            case '%':
                putchar('%');
                printed_chars++;
                break;
            default:
                putchar('%'); /* Print the '%' character if none of the above*/
                putchar(format[i]);
                printed_chars += 2;
            }
        }
    }

    va_end(args);
    return printed_chars;
}

int main()
{
    _printf("Let's try to printf a simple sentence.\n", 5);

    return 0;
}
