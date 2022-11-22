#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

/**
  */
int _printf(const char *format, ...);
int _putchar(char s);
int (*check_specifier(const char *format))(va_list);

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_pcent(va_list);
#endif /**MAIN_H*/
