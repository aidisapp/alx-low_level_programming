#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list args) {
    char ch = va_arg(args, int);
    printf("%c", ch);
}

void print_int(va_list args) {
    int digit = va_arg(args, int);
    printf("%d", digit);
}

void print_double(va_list args) {
    double dec = va_arg(args, double);
    printf("%f", dec);
}

void print_string(va_list args) {
    char *str = va_arg(args, char *);
    if (!str)
        str = "(nil)";
    printf("%s", str);
}

void print_all(const char * const format, ...) {
    va_list args;
    int x = 0;
    va_start(args, format);

    while (format && format[x]) {
        switch (format[x]) {
            case 'c':
                print_char(args);
                break;
            case 'i':
                print_int(args);
                break;
            case 'f':
                print_double(args);
                break;
            case 's':
                print_string(args);
                break;
            default:
                break;
        }

        if (format[x + 1] && format[x] != ' ' && format[x + 1] != '\0')
            printf(", ");

        x++;
    }

    va_end(args);
    printf("\n");
}

