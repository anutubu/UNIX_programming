#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int 
main() {
	int fd;
        if ((fd=open(path, O_RDONLY)) < 0){
		perror("unable to open");
		exit(EXIT_FAILURE);
	}

	/*add stuff we want to do with fd*/
	(void)close(fd);
}

	
