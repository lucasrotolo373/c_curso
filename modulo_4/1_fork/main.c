#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t pid = fork();
	if (pid == 0) {
    	printf("Soy el hijo, mi PID es %d\n", getpid());
	} else {
		wait(NULL);
    	printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d\n", getpid(), pid);
	}
}