#include <stdio.h>
void pre_main(void) __attribute__ ((constructor));

/**
 * pre_main - Prints the specified strings before main is executed.
 *
 * Description: This function prints two lines of text before the main
 * function is executed.
 */

void pre_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
