/*  main.c -- James Otto 
	main program function for an introductory C program "prog1"
	that demonstrates console I/O and program organization */

/* declarations for I/O library functions printf() and scanf() */
#include <stdio.h>

/* declarations for standard library like exit() */
#include <stdlib.h>

/* declarations for the call to library function perror() in writer() */
#include <errno.h>

/* declare this function which is defined below */
void writer(int p);

/* the main() function...*/
int main(void)
{
	int pindex=1;

	/* find out what the users wants... */
	printf("enter 0, 1 or 2 to print:\n");
	printf("  0 -- hello \n");
	printf("  1 --  I want more \n");
	printf("  2 --  goodbye \n");

	scanf("%d", &pindex); 
	printf("after scanf, value of pindex= %d\n",pindex);
	/* ... pass the input on to the writer function */
	writer(pindex);

	exit(EXIT_SUCCESS);
	return 0;
}  /* END OF MAIN */

void writer(int p)
{
	if (p == 0) {
		printf("hello, world\n");
	}
	else {
		if (p == 1) {
			printf("goodbye, world\n");
		}
		else {
			if (p == 2) {
				printf("goodbye, world\n");
			}
			else {
				errno = EPERM;
				perror("Unqualified");
				exit(EXIT_FAILURE);
			} /* end of if (p == 2) */
		} /* end of if (p == 1) */
	} /* end of if (p == 0) */
} /* end function writer */
