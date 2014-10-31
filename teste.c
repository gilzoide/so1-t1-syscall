#include <sys/syscall.h>
#include <stdio.h>


int main () {
	long int retorno = syscall (317);

	printf ("Sou inocente!\n");

	return 0;
}
