#include <stdio.h>

/**
 * pre_main - Entry of program
 * Description: Prints the specified strings before main is executed.
 *
 */
void pre_main(void) __attribute__ ((constructor));
void pre_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

/**
 * main - Entry of program main function to be executed.
 *
 * return: Always (0) success
 *
 */
int main(void)
{
return (0);
}
