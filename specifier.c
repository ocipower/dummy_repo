#include "main.h"

int (*check_specifier(char *format))(va_list)
{
	func_t option[] = {
		{"c", func1},
		{"s", func2},
		{"%", func3},
		{NULL, NULL}
	};
	
	while(option[i].name != NULL)
	{
		if (option[i].name == *format)
			return (option[i].f)
	}
}
