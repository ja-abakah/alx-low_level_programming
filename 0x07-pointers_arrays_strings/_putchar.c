#include "main.h"
#include <unistd.h>
/**
 * _putchar - Entry of the prototype
 *
 * Description: creates the c letter.
 * @c: will be the character to print.
 *
 *return: 1 as success
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
