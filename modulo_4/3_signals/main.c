#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <pthread.h>
#include <signal.h> 

volatile sig_atomic_t estado = 0;

void manejador(int sig){
	estado = 1;
	printf("%s\n", "Cerrando limpiamente...");
}

int main(){
	struct sigaction sa;
	sa.sa_handler = manejador;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGINT, &sa, NULL);
	while(!estado){
		printf("%s\n", "Corriendo...");
		sleep(1);
	}
	return 0;
}