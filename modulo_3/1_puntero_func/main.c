#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int (*leer)(void);
	void (*escribir)(int);
} Dispositivo;

int leer_sensor(){
	return 47;
}

void escribir_led(int valor){
	printf("LED: %d\n", valor);
}

int leer_temp(){
	return 25;
}

void escribir_temp(int valor){
	printf("Temperatura: %d\n", valor);
}

int main(){
	Dispositivo dispositivos[2];
	dispositivos[0].leer = leer_sensor;
	dispositivos[0].escribir = escribir_led;
	dispositivos[1].leer = leer_temp;
	dispositivos[1].escribir = escribir_temp;
	for (int i = 0; i < 2; i++) {
    	int v = dispositivos[i].leer();
    	dispositivos[i].escribir(v);
	}
}