/**
* print_numbers - prints 0 to 9
* Return: void
*/


void print_numbers(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		_putchar('0' + t);
	}

	_putchar('\n');
	return (0);
}
