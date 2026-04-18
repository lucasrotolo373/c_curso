# Ejercicio 1 — Lista enlazada

## Descripción
Implementación de una lista enlazada simple en C puro sin librerías externas.
Incluye creación de nodos, inserción al frente, impresión y liberación de memoria.

## Funciones implementadas
- crear_nodo: aloca un nodo en el heap con malloc
- insertar_al_frente: inserta un nuevo nodo como cabeza de la lista
- imprimir_lista: recorre e imprime todos los nodos
- eliminar_lista: libera todos los nodos y deja el puntero en NULL

## Conceptos clave
- Doble puntero (Nodo **) para modificar la cabeza desde una función
- Aritmética de punteros y recorrido de estructuras enlazadas
- Guardar el siguiente nodo antes de liberar el actual para no perder la referencia
- *cabeza = NULL al final del free para evitar punteros colgantes
