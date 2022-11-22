#include "main.h"

/**
  */

int print_char(va_list ap)
{
	int count;
	int sum;
	
	sum = 0;
	char ch = (char)va_arg(ap, int);
	if (ch)
	{
		count = _putchar(ch);
		sum += count;
		return (sum);
	}
	return (0);
}


/**
  */

int print_str(va_list ap)
{
	int count;
	int sum;
	
	sum = 0;
	char ch = (char)va_arg(ap, int);
	if (ch)
	{
		count = _putchar(ch);
		sum += count;
		return (sum);
	}
	return (0);
}


/**
  */

int print_pcent(va_list ap)
{
	int count;
	int sum;
	
	sum = 0;
	char ch = (char)va_arg(ap, int);
	if (ch)
	{
		count = _putchar(ch);
		sum += count;
		return (sum);
	}
	return (0);
}
