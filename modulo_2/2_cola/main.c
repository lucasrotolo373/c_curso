#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
	int valor;
	struct Nodo * sig;
} Nodo;

Nodo* crear_nodo(int valor);
void encolar(Nodo **cabeza, Nodo **cola, int valor);
int desencolar(Nodo **cabeza, Nodo **cola);
void imprimir_cola(Nodo *cabeza);


Nodo* crear_nodo(int valor){
	Nodo *nuevo = malloc(sizeof(Nodo));
	nuevo->valor = valor;
	nuevo->sig = NULL;
	return nuevo;
}

void encolar(Nodo **cabeza, Nodo **cola, int valor){
	Nodo *nuevo = crear_nodo(valor);
	if (*cabeza != NULL){
		(*cola)->sig = nuevo;
		*cola = nuevo;
	}else {
		*cola = nuevo;
		*cabeza = nuevo;
	}
}

int desencolar(Nodo **cabeza, Nodo **cola){
	int valor;
	if (*cabeza != NULL){
		valor = (*cabeza)->valor;
		Nodo *aux = *cabeza;
		*cabeza = (*cabeza) -> sig;
		free(aux);
	}else {
		return -1;
	}
	if(*cabeza == NULL){
		*cola = NULL;
	}
	return valor;
}


int main(){
	Nodo *cabeza = NULL;
	Nodo *cola = NULL;
	int valor;
	for (int i = 0; i < 5; i++){
		encolar (&cabeza, &cola, i);
	}
	while (cabeza != NULL){
		valor = desencolar(&cabeza, &cola);
		printf("%d\n", valor);
	}
}


