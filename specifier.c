#include "main.h"

int (*check_specifier(const char *format))(va_list)
{
	func_t option[] = {
		{"c", print_char.c},
		{"s", print_str.c},
		{"%", print_pcent.c},
		{NULL, NULL}
	};
	
	while(option[i].name != NULL)
	{
		if (*(option[i].name) == *format)
			return (option[i].f)
	}
}
