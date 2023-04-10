#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: The charcter to be printed
 *
 * Return: On succcess 1
 * On error , -1 is returned
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
