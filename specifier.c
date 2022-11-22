#include "main.h"

int (*check_specifier(const char *format))(va_list)
{
	int i;
	func_t option[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pcent},
		{NULL, NULL}
	};
	
	i = 0;
	while(option[i].t != NULL)
	{
		if (*(option[i].t) == *format)
			return (option[i].f);
	}
}
