#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *func(void *arg){
	pthread_mutex_lock(&mutex);
	for (int i = 0; i < 5; i++){
		printf ("%ld\n", (long)arg);
		usleep(1000); // 1 milisegundo
	}
	pthread_mutex_unlock(&mutex);
	return NULL;
}

int main(){
	pthread_t t1, t2;
	pthread_create(&t1, NULL, func, (void *)1);
	pthread_create(&t2, NULL, func, (void *)2);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
}