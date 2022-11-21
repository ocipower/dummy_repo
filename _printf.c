#include "main.h"

/**
  */

int _printf(const char *format, ...)
{
	int i;
	int sum;
	int count;
	
	sum = 0;

	if (format == NULL)
		return NULL;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			count = _putchar(format[i]);
			sum += count;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			format[i + 1]
		}
		if (format[i + 1] == '\0')
		{
			break;
		}

	}
	return (sum);
}

