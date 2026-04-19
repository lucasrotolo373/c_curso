# Ejercicio 2 — Cola (queue)

## Descripción
Implementación de una cola FIFO en C puro con dos punteros: cabeza y cola.
Permite encolar en O(1) y desencolar en O(1).

## Funciones implementadas
- encolar: agrega un nodo al final de la cola
- desencolar: saca el primer nodo y devuelve su valor
- caso borde: cuando la cola queda vacía ambos punteros quedan en NULL

## Conceptos clave
- FIFO: el primero en entrar es el primero en salir
- Puntero a cola para inserción en O(1) sin recorrer la lista
- Doble puntero (Nodo **) para modificar cabeza y cola desde las funciones
- Si después de desencolar cabeza queda NULL, cola también debe quedar NULL
