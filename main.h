#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - A struct to match the conversion specifiers for printf
 * @kd: A type char pointer 
 * @f: A pointer to a function that corresponds to the conversion specifier.
 */
typedef struct format
{
    char *kd;
    int (*f)();
} ConversionInfo;

int _printf(const char *format, ...); /* Handle various conversion specifiers */
int printf_pointer(va_list list); /* Handle pointers */
int printf_hex_aux(unsigned long int num); /* Helper function for printing hexadecimal in lowercase */
int printf_HEX_aux(unsigned int num); /* Helper function for printing hexadecimal in uppercase */
int printf_exclusive_string(va_list list); /* Handle exclusive string formatting */
int printf_HEX(va_list list); /* Handle hexadecimal formatting in uppercase */
int printf_hex(va_list list); /* Handle hexadecimal formatting in lowercase */
int printf_oct(va_list list); /* Handle octal formatting */
int printf_unsigned(va_list args); /* Handle unsigned integer formatting */
int printf_bin(va_list list); /* Handle binary formatting */
int printf_srev(va_list args); /* Handle string reverse formatting */
int printf_rot13(va_list args); /* Handle ROT13 encoding of a string */
int printf_int(va_list args); /* Handle integer formatting */
int printf_dec(va_list args); /* Handle decimal formatting */
int _strlen(char *s); /* Calculate the length of a string */
int *_strcpy(char *dest, char *src); /* Copy a string to a destination buffer */
int _strlenc(const char *s); /* Calculate the length of a string without null terminator */
int rev_string(char *s); /* Reverse the characters in a string */
int _strlenc(const char *s); /* Calculate the length of a string without null terminator */
int printf_37(void); /* Handle '%' character */
int printf_char(va_list list); /* Handle character formatting */
int printf_string(va_list list); /* Handle string formatting */
int _putchar(char c); /* Write a character to standard output */

#endif
