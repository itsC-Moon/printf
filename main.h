#ifndef OUTPUT_F
#define OUTPUT_F
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int print(va_list ap, char format);
int is_valide_format(char c);
void _putchar(char c);
int _strlen(char *str);
int _intlen(int n);
int _puts(char *str);
void print_number(int n);

#endif /* OUTPUT_F*/
