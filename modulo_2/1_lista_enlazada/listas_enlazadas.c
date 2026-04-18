#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
	int valor;
	struct Nodo * sig;
} Nodo;

Nodo* crear_nodo(int valor);
void insertar_al_frente(Nodo **cabeza, int valor);
void imprimir_lista(Nodo *cabeza);

Nodo* crear_nodo(int valor){
	Nodo *nuevo = malloc(sizeof(Nodo));
	nuevo->valor = valor;
	nuevo->sig = NULL;
	return nuevo;
}

void insertar_al_frente(Nodo **cabeza, int valor){
	Nodo *nuevo = crear_nodo(valor);
	nuevo -> sig = *cabeza;
	*cabeza = nuevo;
}


void imprimir_lista(Nodo *cabeza){
	int i = 0;
	while (cabeza != NULL){
		printf("%d\n", cabeza->valor);
		cabeza = cabeza->sig;
		i++;
	}
}

void eliminar_lista(Nodo **cabeza){
	Nodo *actual = *cabeza;
	while (actual != NULL){
		Nodo *sig = actual -> sig;
		free(actual);
		actual = sig;
	}
	*cabeza = NULL;
}

int main(){
	Nodo *cabeza = NULL;
	for (int i = 0; i < 5; i++){
		insertar_al_frente(&cabeza, i);
	}
	imprimir_lista(cabeza);
	eliminar_lista(&cabeza);
	return 0;
}