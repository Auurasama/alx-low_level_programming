#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 for success
 */

int main(void)
{
	char *buff = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, buff, 59);
	return (1);
}
