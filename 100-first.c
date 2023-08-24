#include <stdio.h>

void first_custom(void) __attribute__ ((constructor));

/**
* first_custom - prints a customized sentence before the main function is executed
*/
void first_custom(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I carry my home on my back!\n");
}
