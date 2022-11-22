#include "main.h"

/**
  */

int _printf(const char *format, ...)
{
	int i;
	int sum;
	int count;
	va_list ap;
	int (*ptr)(va_list);
	
	sum = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
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
			ptr = check_specifier(&format[i + 1]);
			if (ptr != NULL)
			{
				count = ptr(ap);
				sum += count;
				i += 2;
				continue;
		}
		if (format[i + 1] == '\0')
		{
			break;
		}

	}
	return (sum);
	}
}
