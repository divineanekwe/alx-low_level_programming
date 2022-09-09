#include <stdio.h>
#include <unistd.h>
/**
 * main - Program starts with the entry point
 * write - A system call that is used to write
 * data out of a buffeir
 *
 * Description: Print exactly and that piece of art is
 * useful" - Dora Korpar, 2015-10-19
 * followed by a new line, to the standard error
 * Return: Program should return 1 (end program with error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
