#include "main.h"

/**
  * main - entry point
  * @Return: always 0
  */

int main(void)
{
	//write(1,"STANDARD PRINTF\n", 16);	
	printf("Buddy\n");

	_putchar('\n');

	//write(1,"OWN PRINTF\n", 19);
	int n = _printf("Buddy\n");
	_putchar(n + '0');

	_putchar('\n');

	return (0);
}
