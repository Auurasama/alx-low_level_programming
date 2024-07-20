void _puts(char *str)
{
	while (*s != '\0)
	{
		_putchar(*s);
		*s++;
	}
	_putchar('\n');
}
