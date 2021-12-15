#include <stdio.h>

char *getlogin(void);

int
main(int argc, char **argv) {
	printf("Welcome to Advanced programming in the UNNIX Environment, %s!n", getlogin());
}
