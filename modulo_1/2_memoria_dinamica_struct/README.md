# Ejercicio 2 — Memoria dinámica con structs

## Descripción
Programa que carga una lista de personas (nombre y edad) usando memoria dinámica.
La cantidad de personas se ingresa por stdin y el array se aloca con malloc.

## Conceptos clave
- malloc(cant * sizeof(Persona)) para alocar arrays dinámicos
- Un puntero a struct es suficiente para representar un array contiguo en el heap
- fgets para leer strings, scanf para enteros
- getchar() para limpiar el \n del buffer entre scanf y fgets
- free() sobre el puntero del array, no elemento por elemento
