#ifndef OUTPUT_F
#define OUTPUT_F
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int print(va_list ap, char format);
int is_valide_format(char c);
int _putchar(char c);
int _strlen(char *str);
int _intlen(int n);
int _puts(char *str);
void print_binary(unsigned int number, int *len);
void print_number(int n);
void print_unsigned(unsigned int n);
unsigned int u_intlen(unsigned int n);


#endif /* OUTPUT_F*/
