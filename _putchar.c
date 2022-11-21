#include "main.h"
/**
  */

int _putchar(char s)
{
	int count;

	count = write(1, &s, 1);
	return (count);
}
