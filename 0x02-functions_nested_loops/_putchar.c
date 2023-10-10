#include <unistd.h>

/**
 *  * _putchar - character "c" is written to stdout
 *   * @c: the character to be printed
 *    *
 *     * Return: success value 1
 *      * error, value -1 is returned
 *       */
int _putchar(char c)
{
	        return (write(1, &c, 1));
}
