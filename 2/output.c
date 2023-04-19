#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
int main(void)
{
	printf("A regular message on stdout\n");
	/* Using streams with fprint(f) */
	fprintf(stderr, "An error message on stderr\n");
	/* Using file descriptors with dprintf().
	* requires _POSIX_C_SOURCE 200809L
	* (man 3 dprintf)*/
	dprintf(1, "A regular message, printed to "
		"fd 1\n");
	dprintf(2, "An error message, printed to"
		"fd 2\n");
	return 0;
}
